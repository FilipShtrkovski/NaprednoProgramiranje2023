#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string mesec[] = {"Januari", "Fevruari", "Mart", "April", "Maj", "Juni", "Juli", "Avgust", "Septemvri", "Oktomvri", "Noemvri", "Dekemvri"};
 
    for(int i = 0; i<12; i++){
        cout<<mesec[i]<<" ";
    }
    cout<<endl;
 
    string mesecVnes;
    cout<<"Vnesete ime na mesec"<<endl;
    cin>>mesecVnes;
 
    if(mesecVnes == "Januari"){
        cout<<"Januari e prv mesec vo godinata i nemu mu pripagja godishnoto vreme zima"<<endl;
    }
    else if(mesecVnes == "Fevruari"){
        cout<<"Fevruari e vtor mesec vo godinata i nemu mu pripagja godishnoto vreme zima"<<endl;
    }
    else if(mesecVnes == "Mart"){
        cout<<"Mart e tret mesec vo godinata i nemu mu pripagjaat godishnite vreminja zima i prolet"<<endl;
    }   
    else if(mesecVnes == "April"){
        cout<<"April e chetvort mesec vo godinata i nemu mu pripagja godishnoto vreme prolet"<<endl;
    }    
    else if(mesecVnes == "Maj"){
        cout<<"Maj e peti mesec vo godinata i nemu mu pripagja godishnoto vreme prilet"<<endl;
    }    
    else if(mesecVnes == "Juni"){
        cout<<"Juni e shesti mesec vo godinata i nemu mu pripagjaat godishnite vreminja prolet i leto"<<endl;
    }    
    else if(mesecVnes == "Juli"){
        cout<<"Juli e sedmi mesec vo godinata i nemu mu pripagja godishnoto vreme leto"<<endl;
    }
    else if(mesecVnes == "Avgust"){
        cout<<"Avgust e osmi mesec vo godinata i nemu mu pripagja godishnoto vreme leto"<<endl;
    }
    else if(mesecVnes == "Septemvri"){
        cout<<"Septemvri e deveti mesec vo godinata i nemu mu pripagjaat godishnite vreminja leto i esen"<<endl;
    }
    else if(mesecVnes == "Oktomvri"){
        cout<<"Oktomvri e deseti mesec vo godinata i nemu mu pripagja godishnoto vreme esen"<<endl;
    }
    else if(mesecVnes == "Noemvri"){
        cout<<"Noemvri e edinaeseti mesec vo godinata i nemu mu pripagja godishnoto vreme esen"<<endl;
    }
    else if(mesecVnes == "Dekemvri"){
        cout<<"Dekemvri e Dvanaeseti mesec vo godinata i nemu mu pripagjaat godishnite vreminja esen i zima"<<endl;
    }
    else
    {
        cout<<"Nevaliden mesec"<<endl;
    }
    return 0;
}