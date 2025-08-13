
class Solution {
public:
  void print_vector(vector<int> &vect) {
    std::cout << "===========\n";
    for (auto v : vect) {
      std::cout << v << "\n";
    }
  }

  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (m == 0 && n == 0) {
      return;
    }
    if (m == 0) {
      nums1 = nums2;
    }
    if (n == 0) {
      return;
    }
    vector<int> new_test_vector;
    int nums1_iter = 0;
    int nums2_iter = 0;
    int i = 0;

    while (nums1_iter < m && nums2_iter < n) {
      if (nums1[nums1_iter] < nums2[nums2_iter]) {
        new_test_vector.push_back(nums1[nums1_iter]);
        nums1_iter++;
        std::cout << "num1 < num2\n";
        print_vector(new_test_vector);
      } else if (nums1[nums1_iter] == nums2[nums2_iter]) {
        new_test_vector.push_back(nums1[nums1_iter]);
        new_test_vector.push_back(nums1[nums1_iter]);
        nums1_iter++;
        nums2_iter++;

        std::cout << "num1 == num2\n";
        print_vector(new_test_vector);
      } else {
        new_test_vector.push_back(nums2[nums2_iter]);
        nums2_iter++;
        std::cout << "num1 > num2\n";
        print_vector(new_test_vector);
        
      }
      i++;
    }

    if (nums1_iter < m) {
      for (int i = nums1_iter; i < m; i++) {
        new_test_vector.push_back(nums1[i]);
      }
    } else if (nums2_iter < n) {
      for (int i = nums2_iter; i < n; i++) {
        new_test_vector.push_back(nums2[i]);
      }
    }
    print_vector(new_test_vector);
    nums1 = new_test_vector;
  }
};