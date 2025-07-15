class Solution {
public:

    bool isValid(string word) {
        bool lengthValidity = word.size()>=3;
        bool containsVowel=false;
        bool containsConsonant=false;
        bool containsNumber=false;

        for(char x : word){
             int asciiVal = (int)x;
            cout<<asciiVal<<endl;
            if((asciiVal>=48 && asciiVal<=57)|| (asciiVal>=65 && asciiVal<=90)||(asciiVal>=97 && asciiVal<=122)){

                if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
                    cout<<"YES"<<x<<endl;
                   containsVowel=true; 
                }
                else if(asciiVal>57){
                     cout<<"YES"<<x<<endl;
                containsConsonant=true;
                }
                
            }
            else{
                return false;
            }
        }   
        cout<<containsConsonant<<" "<<containsVowel<<" ";
        return lengthValidity && containsVowel && containsConsonant;
    }
};