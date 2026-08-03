class Solution {
public:
    vetor<int> spiralOrder(vector<vector<int>> & matrix){
        vector<int>ans;
        int row matrix.size(),col=matrix[0].size();
        int to=0,bottom=row-1,left=0,right=col-1;

        while(left<=right&&top<=bottom){
            // print top
            for(int j=left;j<=right;j++)
            ans.push_back(matrix[top][j]);
            top++;

            // print right

            for(int i=top;i<bottom;i++)
            ans.push_back(matrix[i][right]);
            right--;
            // print bottom
            if(top<=bottom){
                for(int j=right;j>=left;j--)
                ans.push_back(matrix{bottom}[j]);
                bottom--;
            }
            // print left
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                ans.push_back(matrix[i][left]);
                left++;
            }

        }
        return ans;
    }
}
class Solution {
  public:
    void transpose(vector<vector<int>>& matrix,int n) {
        // code here
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            swap(matrix[i][j],mtrix[j][i])
        }
    }
};


// search in sorted row col wise matrix

class Solution {
    public:
    bool search(vector<vector<int> > matrix, int n,int m ,int x){
        int row =0;col=n-1;
        while(row<n&& col>=0){
            if(matrix[row][col]==x)
            return 1;
            else if(matrix[row][col]<x)
            row++;
            else
            col--;
        }
        return 0;
    }
};

// find repeating and missing mnumber

class Solution{
    public:
    vector<int> findTwoElement(vector<int> arr,int n){
        // value of arr decrease by 1
        for(int i=0;i<n;i++)
        arr[i]--;
    // occurence
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        vector<int> ans(2);
        for(inti=0;i< n;i++)
        {
            // repeating
            if(arr[i]/n==2)
            ans[0]=i+1;
            else if(arr[i]/2==0)
            // above is for missing number
            ans[1]=i+1;
        }
        return ans;
    }
};

// find the occurence of the number
void findOcc(int n,int arr [])
{
    // step 1 redue the value of arr by 1
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-1;
    }
    // take each value ad take its mod by n
    for (int i=0;i<n;i++){
        //  now here i first took mod of  element  of i and on that index i added the value of v and assigned it to arr[remainder index] 
         arr[arr[i]%n]+=n; 
    }
    // after that you get the remauinder so at the index f remainder add n

    // once the arr is changed divide it by n to get the occurence
    for(int i=0;i<n;i++){
    cout << i+1 << " occurs " << arr[i]/n << " times\n";
    }
    
}
int main(){
    // take inputs and basic 
    int n,arr[10];
    cout<<"enter the value of n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findOcc(n,arr);
}


// string 

#include<iostream>
using namespace std;

int main(){
    // where input is mentioned
	// char arr[]={'a','p','p','l','e'};
	// for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i];
    // }
    //  variable size if  size is exact 20 because 20 index is assign for null character
    // char arr[20];
    // cin>>arr;
    // cout<<arr;
    // to put null character at particular index
    // char arr[2]=/0;
    String s="rohit";
    cout<<s;
    // for user input
    cin>>s;
    cout<<s;
    getline(cin,s);
    cout<<s;
    // cout<<s.size();to get the size of thr strng

    string s1="shweta",s2="mishra";

    // string s3=s1+s2; another method for cocatenation is append
     string s3=s1.append(s2);
    //  concatenates character and string
    s1+="pa";
    s1+='p';
    s1.push_back('p');
    // last character is removed 
    s1.pop_back();
    cout <<s3
    // escape character
    // does not print entire sentences if no escape chaacter
    string s="krishna is \"good\" just understand him everything becomes \"good\"";
    cout<<s1
    String s="\0";//prints blank

}
// problem on string
#include<iostream>
using namespace std;

int main(){
    string s="rohit";
    int start=0,end =s.size()-1;
    while(start <end)
    {
        swap(s[start],s[end]);
        start++;end--;

    }
    cout<<s;
    int size=0;
    while(s!='\0')
    {
        size++;
    }
    cout<<endl;
    cout<<size<<" ";

    string s2="naman";
    start=0,end=s2.size()-1;

    while(start<end)
    {
        if(s2[start]!=s2[end])
        {
            cout<<"not a pallindrone";
            return 0;
        }
        start++,end--;

    }
    cout<<"is a pallindrome";
}

// check if the string rotated by two places is equal to str 2 or not 
// passed as reference te changes ar made in clockwise of main function no extra space is take for it
void rotateclock(string &s){
    char c=s[s.size()-1];
    int index =s.size()-2;

    while(index>=0){
        s[index+1]=s[index];
        index--;
    }
    s[0]=c;
}
void rotateanticlock(string &s)
{
    char c=s[0];
    int index=1;
    while(index<s.size())
    {
        s[index-1]=s[index];
        index++;

    }
    s[s.size()-1]=c;
}

int main(){
    string str1,str2;
    
    cout <<"Enter the value of string ";
    cin>>str1>>str2;
    string anticlockwise=str1,clockwise=str1;

    if(str1.size()!=str2.size())
    return 0;

    rotateclock(clockwise);
    rotateclock(clockwise);
    if(clockwise==str2)
        return 1;

    rotateanticlock(anticlockwise);
    rotateanticlock(anticlockwise);
    if(anticlockwise==str2)
        return 1;
return 0;

}
// check panagram

class Solution{
    bool checkpanagram(string &sentence)
    {
        vector<bool>alpha(26,0);
        for(int i=0;i<sentence.size();i++)
        {
            int index=sentence[i]-'a';
            alpha[index]=1;
        }
        for(int i=0;i<26;i++)
        {
            if(alpha[i]==0)
            return 0;
        }
        return 1;
    }
}
// sort a string 
string sort(string s){

    vector<int>alpha(26,0);
    for(int i=0;i<s.size();i++)
    {
        int index=s[i]-'a';
        alpha[index]++;

    }
    // to print the string
    string ans;
    for(i=0;i<26;i++)
    {
        char c='a'+i;//all the values of apla are iterated one by one 
        while(alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
    }
    return 1;                                                                                 
}
// leet code 409
class Solution {
public:
    int longestPalindrome(string s) {

        // Frequency arrays for lowercase and uppercase letters
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        // Count frequencies
        for (int i = 0; i < s.size(); i++) {

            // Lowercase letter
            if (s[i] >= 'a' && s[i] <= 'z') {
                int index = s[i] - 'a';
                lower[index]++;
            }

            // Uppercase letter
            else {
                int index = s[i] - 'A';
                upper[index]++;
            }
        }

        int count = 0;
        bool odd = false;

        // Calculate the maximum palindrome length
        for (int i = 0; i < 26; i++) {

            // For lowercase letters
            if (lower[i] % 2 == 0) {
                count += lower[i];
            }
            else {
                // Use the even part
                count += lower[i] - 1;
                odd = true;
            }

            // For uppercase letters
            if (upper[i] % 2 == 0) {
                count += upper[i];
            }
            else {
                // Use the even part
                count += upper[i] - 1;
                odd = true;
            }
        }

        // If at least one odd frequency exists,
        // place one character in the center
        if (odd)
            count++;

        return count;
    }
};



