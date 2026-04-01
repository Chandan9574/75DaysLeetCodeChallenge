class Solution {
public:
int solve(int a, int b, string c){
    if(c=="+") return a+b;
    else if(c=="-") return a-b;
    else if(c=="*") return a*b;
    return a/b;
}
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
                if(tokens[i]=="+" || tokens[i]=="-" ||tokens[i]=="*" ||tokens[i]=="/"){
                    int b=st.top();
                    st.pop();
                    int a=st.top();
                    st.pop();
                    string c=tokens[i];
                    int k = solve(a,b,c);
                    st.push(k);
                }else{
                    st.push(stoi(tokens[i]));
                }
        }
        return st.top();
    }
};