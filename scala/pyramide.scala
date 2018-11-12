

object pyramide extends App {
  var permutation:List[Array[Int]]=Nil; 
  val hauteur=5;
  var nombre_appel=0;
  
   def indice_ligne( ligne:Int, colonne:Int) : Int = {
     return (ligne*(ligne-1)/2+colonne-1);     
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
   
   def correct(tab:Array[Int]):Boolean={
     for(i:Int<-1 to hauteur-1)
       for(j:Int<-1 to i)
         if(tab(indice_ligne(i,j))!=Math.abs(tab(indice_ligne(i+1,j))-tab(indice_ligne(i+1,j+1))))
             return false;
         return true;
   }
   
   def solution(tab:Array[Int]){
     if(correct(tab)){
       for(i:Int<-1 to tab.length)
       print(tab(i-1));
       println(" ");
   }
 
   }
    genere(0, new Array((hauteur*(hauteur+1))/2))
   permutation.foreach(solution);
     print(nombre_appel);
}
