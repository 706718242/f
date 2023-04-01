window.onload = (event) => {
  console.log('co is fully loaded');
setTimeout(function() {
const table = document.getElementById("OnMachine");
const a = []; 
const b = []; 
const c = []; 
const table1 = [];
 const Qty= []; 
for (let i = 1; i < table.rows.length; i++) {
 
  a[i]=parseInt(table.rows[i].cells[3].innerText);
}
 var tabl = document.getElementById("OnLine");
 
for (let i = 1; i < table.rows.length; i++) {
 
  b[i]=parseInt(table.rows[i].cells[5].innerText);
if(a[i]/b[i]<250){ 
 
//数量不够的添加到表格
if(table.rows[i-1].cells[0].innerText!=table.rows[i].cells[0].innerText){
tabl.insertRow(-1).insertCell(0).innerText=table.rows[i].cells[0].innerText;

 c[i]=i; }
 
}else{ 
//计算已完成的数量 
Qty[0]  = (parseInt(table.rows[i].cells[3].innerText)-parseInt(table.rows[i].cells[4].innerText))/parseInt(table.rows[i].cells[5].innerText);   }
 
}
for (let i = 1; i < table.rows.length; i++) {
 
  table1[i]=table.rows[i].innerText;
}

console.log(a);   
console.log(b);  
console.log(c);   
console.log(Qty[0]); 
 
 
 
 
 
 
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
