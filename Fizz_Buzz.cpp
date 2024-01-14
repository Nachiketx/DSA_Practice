class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> seq;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                seq.push_back("FizzBuzz");
            }
            else if(i%5==0)
            {
                seq.push_back("Buzz");
            }
            else if (i%3==0)
            {
                seq.push_back("Fizz");
            }
            else 
            {
            seq.push_back(to_string(i));
            }
        }
        return seq;
    }
};
