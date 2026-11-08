#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<int> twoSumBruteForce(const vector<int>& nums, int target){
    
    vector<int> result = {};

    vector<int> tested = {};
    for (int i = 0; i < nums.size(); i++){
        if (find(tested.begin(),tested.end(), nums[i]) == tested.end()){
            
            for (int j = i+1; j < nums.size(); j++){
            if (nums[i]+nums[j] == target){
                result.push_back(i);
                result.push_back(j);
            }
        }
        }
    }
    return result;
}

vector<int> twoSumOptimal(const vector<int>& nums, int target) {
    // La map stocke : { valeur_du_nombre, indice }
    unordered_map<int, int> num_to_index;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // 1. Est-ce que le complément existe déjà dans notre map ?
        if (num_to_index.find(complement) != num_to_index.end()) {
            // Oui ! On retourne son indice et l'indice actuel
            return {num_to_index[complement], i};
        }

        // 2. Non, on ajoute le nombre courant et son indice dans la map
        num_to_index[nums[i]] = i;
    }

    return {}; // Retourne un vecteur vide si aucune solution n'est trouvée
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> indicesBruteForce = twoSumBruteForce(nums, target);
    cout << "Brut Force Solution: ["
         << indicesBruteForce[0]
         << ", "
         << indicesBruteForce[1]
         << "]"
         << endl;

    return 0;

    vector<int> indicesOptimal = twoSumOptimal(nums, target);
    cout << "Optimal Solution: ["
         << indicesBruteForce[0]
         << ", "
         << indicesBruteForce[1]
         << "]"
         << endl;

    return 0;
}