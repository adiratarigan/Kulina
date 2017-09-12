#include<iostream>
#include<sstream>
#include<cstring>

using namespace std;
int main(){
	
	char input[100], temp[100];
  	int j = 0,x = 0,m=1,y;
  
    
    cout << "Masukkan input angka" << endl;
    cin.getline(input, 100);
    for(int i = 0; input[i] != '\0'; ++i)
    {
        if ((input[i] >= '0' && input[i]<='9'))
        {
            temp[j++] = input[i]; 

        }
    }
    temp[j] = '\0';

   
    stringstream cool(temp);
	cool >> x;
	y= strlen(temp);
  	
	 for (int k = 1;k<y;++k){
 		m=m*10;
	 }
	 
	while (x >0)
		{
		y=x-(x%m);
		x=x-y;
		cout<<y<<endl;
		m=m/10;
		}
	 
    return 0;
}
	
	
	
	

