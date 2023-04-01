window.onload = (event) => {
  console.log('co is fully loaded');
setTimeout(function() {
const table = document.getElementById("OnMachine");
const a = []; 
const b = []; 
const c = []; 
const table1 = [];
 const Qty1= []; 
const Slot=0,Qty=3,Balance=4,Usage=5;
for (let i = 1; i < table.rows.length; i++) {
 //获取数量
  a[i]=parseInt(table.rows[i].cells[Qty].innerText);
 
}
 var tabl = document.getElementById("OnLine");
 
for (let i = 1; i < table.rows.length; i++) {
 //获取用量
  b[i]=parseInt(table.rows[i].cells[Usage].innerText);
 //如果发现一样的
 if(table.rows[i-1].cells[Slot].innerText==table.rows[i].cells[Slot].innerText){
 console.log("f");  
  console.log(i);  
  console.log(a[i-1]); 
  console.log(a[i]); 
 a[i]=a[i-1]+a[i];
  a[i-1]=a[i];
console.log(a[i]);  
  }
 console.log(a[i]); 
 console.log(b[i]); 
 //数量除用量等可完成量
if((a[i]/b[i])<250){ 
 console.log(a[i]/b[i]);  
//数量不够的添加到表格
 

 tabl.insertRow(-1).insertCell(Slot).innerText=table.rows[i].cells[Slot].innerText;

 c[i]=i;


 
}else{ 
//计算已完成的数量 
Qty1[0]  = (parseInt(table.rows[i].cells[Qty].innerText)-parseInt(table.rows[i].cells[Balance].innerText))/parseInt(table.rows[i].cells[Usage].innerText);   }
 
}
for (let i = 1; i < table.rows.length; i++) {
 
  table1[i]=table.rows[i].innerText;
}

console.log(a);   
console.log(b);  
console.log(c);   
console.log("已完成"+Qty1[0]); 
 
 
 
 
 
 
 /*
 //大到小排序                                      
 var max = []; 
 var d = a.length*a.length;

 var tsw=[];

 for(var j=0; j<d;j++){
 for (var i = 1; i < a.length; i++) {
 if(a[i-1]<a[i]){ d++; max=a[i]; a[i]=a[i-1]; a[i-1]=max; 
                
                
                
                
                
                
                } 

 } }   console.log(a);                                                             
  /*                                                      
for (let i = 0; i < table.rows.length; i++) {
  table.rows[i].cells[3].innerHTML='<span id=i>'+a[i]+'</span>';
console.log( table.rows[i].cells[3].innerText);      }

*/ 


}, 100); 


};
