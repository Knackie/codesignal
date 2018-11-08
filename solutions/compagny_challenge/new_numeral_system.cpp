std::vector<std::string> newNumeralSystem(char number) {
bool test=true;
   std::string val="";
   std::vector<std::string> result;
   char fin='A';
   for(fin;fin<number+1 && test==true;fin++)
   {
      val=fin;
      val+=" + ";
      val+=number;
      result.push_back(val);
   if(number==fin)
      test=false;
   number--;
   }
   return result;
    
}
