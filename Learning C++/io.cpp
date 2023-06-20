 #include<iostream>
 #include<string>
 int main(){
    //printing data
    std::cout<<"Hello world"<<std::endl;

    int age{21};
    std::cout<<"Age:"<<age<<std::endl;

    //inputing data
    int age1;
    std::string name;
    std:: string name1;
    std::cout<<"Name and AGE:"<<std::endl;

    std::cin>>name;
    std::cin>>age;
    std::cout<<"Your name is "<< name<<" and your age is : "<<age<<std::endl;
  // or we can use
    std::cin>> name1>> age1;
    std::cout<<"Your name is "<< name1<<" and your age is : "<<age1<<std::endl;  

    //getting a whole line input i.e data with spaces
    int number;
    std::string whole_name;
     
    std::cout<<"Enter your whole name and number :"<<std::endl;

    std::getline(std::cin,whole_name);
    std::cin>>number;
    std::cout<<"Your name is "<< whole_name<<" and your number is  : "<<number<<std::endl;  

    return 0;
 }