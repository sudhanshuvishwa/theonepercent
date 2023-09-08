 #include<iostream>
 #include<string>
 #include<algorithm>

 int main(){
    std::string s;
    getline(cin,s);

    for(int i=0; i<s.length();i++){
        if(s[i]>='a'&&s[i]<= 'z'){
            s[i]-=32;
        }
    }

    std::string a;
    a=s;

    for(int i=0;i<a.length();i++){

    }
    std::cout<<s;
 }