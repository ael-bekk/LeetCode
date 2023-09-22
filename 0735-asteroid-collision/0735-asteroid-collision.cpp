class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int leftAsteroid = asteroids.size();
        unordered_map<int, bool> collid;
        stack<int> stack;
        vector<int> res;
        int indx;

        while (leftAsteroid--) {
            if (!stack.empty() and !collid[leftAsteroid] and asteroids[leftAsteroid] > 0) {
                indx = stack.top();
                if (-asteroids[indx] >= asteroids[leftAsteroid])
                    collid[leftAsteroid] = true;
                if (-asteroids[indx] <= asteroids[leftAsteroid]) {
                    collid[indx] = true;
                    stack.pop();
                    leftAsteroid++;
                }
            } else if (!collid[leftAsteroid] and asteroids[leftAsteroid] < 0)
                stack.push(leftAsteroid);
        }

        for (int i = 0; i < asteroids.size(); i++)    if (!collid[i]) res.push_back(asteroids[i]);

        return res;
    }
};