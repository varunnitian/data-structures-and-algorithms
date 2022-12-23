// #include<iostream>
// using namespace std;
// int main()
// {
//   char s[]="welcome";
//   int i,count=0;
//   for(i=0;s[i]!='\0';i++){
//     count++;
//   }  
//   cout<<"length of string is :"<<count<<endl;
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   char a[]="welcome";
//   int i;
//   for(i=0;a[i]!='\0';i++)
//   {
//     a[i]=a[i]-32;
//   }
//   cout<<a<<endl;
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   char a[]="how old are you";
//   int i,vcount=0,ccount=0,words=0;
//   for ( i = 0;a[i]!='\0'; i++)
//   {
//     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='U')
//     {
//       vcount++;
//     }
//     else if(a[i]>=65 && a[i]<=90||a[i]>=97 && a[i]<=122)
//     {
//       ccount++;
//     }
//     else if(a[i]==' ')
//     {
//       words++;
//     }
//   }
//   cout<<"number of vowels:"<<vcount<<endl;
//   cout<<"number of consonants:"<<ccount<<endl;
//   cout<<"number of words are :"<<words+1<<endl;
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int validate(char name[])
// {
//   int i;
//   for(i=0;name[i]!='\0';i++)
//   {
//     if (!(name[i]>=65 && name[i]<=90)||!(name[i]>=97 && name[i]<=122)||!(name[i]>=48 && name[i]<=57))
//     {
//       return 0;
//     }
    
//   }
//   return 1;
// }
// int main()
// {
//   char name[]="anil?123";
//   if(validate(name))
//   {
//     cout<<"valid string";
//   }
//   else
//   {
//     cout<<"invalid string";
//   }
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   char a[]="python";
//   char b[7];
//   int i,j;
//   for(i=0;a[i]!='\0';i++)
//   {
//   }
//    i=i-1;
//     for(j=0;i>=0;i--,j++)
//     {
//       b[j]=a[i];
//     }
//     b[j]='\0';
//   cout<<"reverse of string is : "<<b<<endl;
//   return 0;
// }
//alternate for reversing a string//
// #include<iostream>
// using namespace std;
// int main()
// {
//   char a[]="python";
//   int i,j;
//   for(j=0;a[j]!='\0';j++){

//   }
//   j=j-1;
//   for(i=0;i<j;i++,j--)
//   {
//     char temp=a[i];
//     a[i]=a[j];
//     a[j]=temp;
//   }
//   cout<<"after reversing the string : "<<a<<endl;
//   return 0;
// }

//code to check palindrome//
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     char s[]="nitin";
//     char t[20];
//     for(i=0;s[i]!='\0';i++)
//     {
        
//     }
//     i=i-1;
//     for(j=0;i>=0;i--,j++)
//     {
//         t[j]=s[i];
//     }
//     t[j]='\0';
//     cout<<"the value of string after reversing: "<<t<<endl;
//     for(i=0,j=0;s[i]!='\0'&& t[j]!='\0';i++,j++)
//     {
//         if(s[i]!=t[j])
//         break;
//     }
//     if(s[i]==t[j]){
//             cout<<"the string is a palindrome!"<<endl;
//         }
//         else
//         {
//             cout<<"string is not a palindrome"<<endl;
//         }
//     return 0;
// }
