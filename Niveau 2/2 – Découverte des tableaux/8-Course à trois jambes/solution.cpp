#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nbParticipants;
    cin>>nbParticipants;
    int  tabNum[nbParticipants],tabEquipes[nbParticipants];
    for(int i=0;i<nbParticipants;i++){
        cin>>tabNum[i];
    }
    sort(tabNum,tabNum + nbParticipants);
    for(int i=0,j=0;(i<nbParticipants/2) && (j<nbParticipants-1) ;i++,j += 2){
        tabEquipes[j] = tabNum[i];
    }

    for(int i=nbParticipants-1,j=1;(i>=nbParticipants/2)&&(j<nbParticipants);i--,j +=2){
        tabEquipes[j] = tabNum[i];
    }
    for(int i=0,j=1;(i<nbParticipants-1) && (j<nbParticipants);i += 2,j += 2){
        cout<<tabEquipes[i]<<" "<<tabEquipes[j]<<endl;
    }
}