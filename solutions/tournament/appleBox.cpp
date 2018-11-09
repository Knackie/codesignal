int appleBoxes(int k) {
 int a=0,b=0;
 for(int i=1;i<=k;i++)
 {
  if(i%2==0)
   a+=(i*i);
  else
   b+=(i*i);
 }
 return (a-b);
}
