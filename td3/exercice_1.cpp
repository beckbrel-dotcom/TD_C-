#include<vector>
#include<iostream>
#include<map>
#include<algorithm>
#include<set>

using namespace std;

void countFrequencyBruteForce(const vector<int>& numbers){
    vector<int> visited = {};
    for(int k = 0; k < numbers.size(); k++){
        int frequency = 0;
        if (find(visited.begin(),visited.end(),numbers[k]) == visited.end()){
            for (int l = 0; l < numbers.size(); l++){
            if(numbers[l] == numbers[k]){
                frequency += 1;
            }
            visited.push_back(numbers[k]);
        }
        cout<< numbers[k] << " :" << frequency << " times" << endl;
        }
        
    }
}

map<int, int> countFrequencyOptimal(const vector<int>& numbers){

    map<int,int> result;

    vector<int> visited = {};
    for (int i : numbers){
        int n = 0;
        if (find(visited.begin(), visited.end(), i ) == visited.end()){
            result.insert({i, 0});
        }
        if (result[i] + 1){
            result[i] ++;
        }
    }
    return result;
}

int main(){
    vector<int> numbers = {1,2,3,2,4,1,5,5,6};
    cout <<"Frequency Brute Force" << endl;
    countFrequencyBruteForce(numbers);
    
    cout <<"Frequency Optimal" << endl;
    map<int,int> frequencyOptimal = countFrequencyOptimal(numbers);
    for (const auto& entry : frequencyOptimal){
        cout << entry.first << " :" << entry.second << " times" << endl;
    }

    return 0;
}