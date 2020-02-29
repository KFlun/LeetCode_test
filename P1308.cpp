//方法一：用队列存储每一个单词
//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <cmath>
//using namespace std;
//int main() {
//    string word,sentence;
//    int num=0,position=0,pass=0,flag=0;
//    queue<string> senten;
//    cin>>word;
//    cin.ignore();
//
//    while (sentence!="\n"){
//        cin>>sentence;
//        senten.push(sentence);
//        sentence=cin.get();//读取换行符“\n”,自动读取后一位
//    }
//
//    int size=senten.size();
//    for(int i=0;i<size;i++){
//        if(word.length()==senten.front().length()){
//            for(int j=0;j<word.length();j++){
//                if(abs(word[j]-senten.front()[j])!=32&&word[j]-senten.front()[j]!=0)
//                    break;
//                if (j==word.length()-1)
//                    num++;
//            }
//        }
//
//        if (num==1&&flag==0){
//            position=pass;
//            flag++;
//        }
//
//        pass=pass+senten.front().length()+1;
//        senten.pop();
//    }
//
//    if(num==0)
//        cout<<-1;
//    else cout<<num<<" "<<position;
//
//    return 0;
//}

//方法二：用普通的字符串
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[10];
    char sentence[1000000];
    int pass=0,position=0,number=0;
    cin>>word;
    cin.ignore();
    while (true){
        static int j=0;
        sentence[j]=cin.get();
        if (sentence[j]=='\n')break;
        j++;
    }

    for(int i=0;i<strlen(sentence)-1;i++){
        if((abs(word[0]-sentence[i])==32||word[0]-sentence[i]==0)&&(sentence[i-1]==' '||i==0)&&(sentence[i+strlen(word)]==' '||sentence[i+strlen(word)]=='\n'))
        {
            int d=0;
            int b=0;
            double c=0;
            
        }
    }
    cout<<strlen(word)<<endl;
    cout<<strlen(sentence)-1<<endl;
    return 0;
}