class Solution
{
    public:
        int maxArea(vector<int> &height)
        {
            int l = 0;
            int r = height.size() - 1;
            int max_area = 0;

            while (l < r)
            {
                int vertical_line = 0;
                if (height[l] > height[r])
                {
                    vertical_line = height[r];
                }
                else
                {
                    vertical_line = height[l];
                }

                int area = vertical_line * (r - l);

                max_area = std::max(max_area, area);

                if(height[l] < height[r]){
                    l++;
                } else {
                    r--;
                }
            }

            return max_area;
        }
};