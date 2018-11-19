
//not fix
object pyramide extends App {
  var permutation:List[Array[Int]]=Nil; 
  val hauteur=3;
  var nombre_appel=0;
  
   def indice_ligne( ligne:Int, colonne:Int) : Int = {
     return (ligne*(ligne-1)/2+colonne-1);     
   }
   def indice_diag(ligne:Int, diag:Int):Int ={
     return diag*(diag-1)/2+ligne-1;
   }
   def genere(rang:Int,tab:Array[Int]):Unit = {
     if(rang==tab.length){
       
       permutation=tab.clone()::permutation
     }
     else {
      for(i:Int<-1 to tab.length){ // i => valeur a tester
      var t=0;
      var pris=false;
      while(!pris && t<rang){
        if(i==tab(t)){
         pris=true;
        }
        else
       t+=1;
      }
        if(!pris){
          tab(rang)=i;
          nombre_appel+=1;
        genere(rang+1,tab)
     }
      }
   }
}
   def genere_diag(rang:Int,tab:Array[Int]):Unit = {
     if(rang==tab.length){
       if(correct_diag(tab)==true){
       permutation=tab.clone()::permutation
       }
     }
     else {
      for(i:Int<-1 to tab.length){ // i => valeur a tester
      var t=0;
      var pris=false;
      while(!pris && t<rang){
        if(i==tab(t)){
         pris=true;
        }
        else
       t+=1;
      }
        if(!pris){
          tab(rang)=i;
          nombre_appel+=1;
        genere_diag(rang+1,tab)
     }
      }
   }
}
   def genere2(rang:Int,tab:Array[Int]):Unit = {
     if(rang==tab.length){
       
       permutation=tab.clone()::permutation
     }
     else {
      for(i:Int<-1 to tab.length){ // i => valeur a tester
      var t=0;
      var pris=false;
 
          tab(rang)=i;
          nombre_appel+=1;
        genere2(rang+1,tab)
      }
   }
}
   
   def correct(tab:Array[Int]):Boolean={
     for(i:Int<-1 to hauteur-1)
       for(j:Int<-1 to i)
         if(tab(indice_ligne(i,j))!=Math.abs(tab(indice_ligne(i+1,j))-tab(indice_ligne(i+1,j+1))))
             return false;
         return true;
   }
   def correct_diag(tab:Array[Int]) : Boolean={
     for(diag:Int<-2 to hauteur){
       for(ligne:Int<-2 to diag)
         if(indice_diag(ligne,diag)<=hauteur)
         {
           val n1=tab(indice_diag(ligne-1,diag-1));
           val n2=tab(indice_diag(ligne-1,diag));
           val n3=tab(indice_diag(ligne,diag));
           print("indice n1= ",n1,"indice n2= ",n2,"indice n3= ",n3);
          
           if(n3!=math.abs(n1-n2))
           {
             println();
             return false;
           }
         }
     }
      return true;
   }
   
   
   def solution(tab:Array[Int]){
     if(correct_diag(tab)){
       for(i:Int<-1 to tab.length)
       {
      // print(tab(i-1));
        // print(" ");
      }
     // println();
       }
       
   }
    genere(0, new Array((hauteur*(hauteur+1))/2))
   permutation.foreach(solution);
     print(nombre_appel);
}
