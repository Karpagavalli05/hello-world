#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{ vector<string>shoppinglist;
int choice;
string item;
do
{
cout<<"\n---shopping list menu---\n";
cout<<"1.add an item\n";
  cout<<"2.remove an item\n";
cout<<"3.search for an item\n";
cout<<"4.display all item\n";
cout<<"5.exit\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter item to add:";
cin>>item;
shoppinglist.push_back(item);
cout<<"item added successfully:";
cin>>item;
{
bool found=false;
for(int i=0;i<shoppinglist.size(); i++)
{
if(shoppinglist[i]==item)
{
shoppinglist.erase(shoppinglist.begin()+i);
found=true;
break;
}
}
if(found)
  cout<<"item removed successflly.\n";
}
break;
case 3:
cout<<"enter item to search:";
cin>>item;
{
bool found=false;
for(int i=0;i<shoppinglist.size();i++)
{
if(shoppinglist[i]==item)
{
found=true;
break;
}
}
if(found)
  cout<<"item found.\n";
else
  cou<<"item not found.\n";
}
break;
case 4:
cout<<"\nshoppinglist:\n";
if(shoppinglist.empty())
  cout<<"list is empty.\n";
else
{
for(int i=0;i<shoppinglist.size();i++)
  cout<<i+1<<". "<<shoppinglist[i]<<endl;
}
  break;
case 5:
  cout<<"existing program.\n";
  break;
default:
  cout<<"invalid choice.try again.\n";
}
}while(choice!=5);
return 0;
}
cout
