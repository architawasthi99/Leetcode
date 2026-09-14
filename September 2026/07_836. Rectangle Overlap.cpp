class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[2]<=rec2[0]||
            rec1[0]>=rec2[2]||
            rec1[3]<=rec2[1]||
            rec1[1]>=rec2[3])
            {
                return  false;
            }
            return true;
    }
};
int main(){
  Solution s;
  vector<int>rec1=[0.0.2,2];
  vector<int>rec2=[2,1,2,1];
  cout<<boolalpha<<s.isRectangleOverlap(rec1,rec2);
  return 0;
}
