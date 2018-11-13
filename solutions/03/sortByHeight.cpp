std::vector<int> sortByHeight(std::vector<int> a) {
for(int i=0;i<a.size();i++)
    if(a[i]!=-1)
     for(int j=0;j<a.size();j++) 
     {
         if(a[j]!=-1)
         {
             if(a[i]<a[j])
             {
                 auto tmp=a[i];
                 a[i]=a[j];
                 a[j]=tmp;
                 
             }
             
         }
     }
    return a;
}
