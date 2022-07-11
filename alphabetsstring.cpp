#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char *name[20],*temp;
    int i,n,j,k;
    cout<<"How many strings you want to enter.";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"Enter the name=";
        name[i]=new char[20];
        cin>>name[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    for(k=0;k<n;k++){
        cout<<name[k]<<endl;

    }
    delete(*name);
}
