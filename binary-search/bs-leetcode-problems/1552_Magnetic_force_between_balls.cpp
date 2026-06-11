class Solution {
public:
    bool isPossible(vector<int>& position, int m, int mid) {
        int ballsCount = 1;
        int positionOfFirstBall = position[0];

        for ( int i = 1; i < position.size(); i++ ) {
            if (position[i]-positionOfFirstBall >= mid) {
                ballsCount++;
                if(ballsCount == m) return true;
                positionOfFirstBall = position[i];
            }
        }

        return false;
    }

    int maxDistance(vector<int>& position, int m) {
       sort(position.begin(),position.end());
       int s = 0;
       int e = position[position.size() - 1] - position[0];

       int ans = -1;

       while ( s <= e ) {
        int mid = s + (e-s)/2;
        if(isPossible(position,m,mid)) {
            ans = mid;
            s = mid + 1;
        }
        else e = mid - 1;
       }
        
        return ans;
    }
};
