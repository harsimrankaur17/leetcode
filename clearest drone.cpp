class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) { int y = INT_MAX;
      for(int i=0; i<drones.size(); i++){int x = abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);
            if(x<=drones[i][2] && x<y){y=x;
                
            }
        }
  for(int i=0;i<drones.size(); i++){
    int x = abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);
    if(x<=drones[i][2] && x==y){
        return i;
    }
  } return -1;  }
};
