window.onload = (event) => {
  console.log('co is fully loaded');
 
setTimeout(function() {
const table = document.getElementById("OnMachine");
const a = []; 
const b = []; 
const c = []; 
const table1 = [];
 const Qty1= []; 
const 位置=0,数量=3,剩余=4,用量=5;
 //行范围-3_+3 使用二维数组时不用计算范围
 //设计预计算功能 网页刷新时间为5min 根据计算的消耗速度进行预计算 提高刷新率同时不增加服务器负担
 //刷新后预计算的数量恢复为实际数量，再次进行预计算
 //table.rows[3].cells[2].innerText=123;
for (let 行 = 1; 行 < table.rows.length; 行++) {
 //获取数量
  a[行]=parseInt(table.rows[行].cells[数量].innerText);
 
}
 var tabl = document.getElementById("OnLine");
 
for (let i = 1; i < table.rows.length; i++) {
 //获取用量
  b[i]=parseInt(table.rows[i].cells[用量].innerText);
 //如果发现一样的
 if(table.rows[i-1].cells[位置].innerText==table.rows[i].cells[位置].innerText){
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
 

 //tabl.insertRow(-1).insertCell(位置).innerText=table.rows[i].cells[Slot].innerText;

 c[i]=i;


 
}else{ 
//计算已完成的数量 
Qty1[0]  = (parseInt(table.rows[i].cells[数量].innerText)-parseInt(table.rows[i].cells[剩余].innerText))/parseInt(table.rows[i].cells[用量].innerText);   }
 
}
for (let i = 1; i < table.rows.length; i++) {
 
  table1[i]=table.rows[i].innerText;
}

console.log(a);   
console.log(b);  
console.log(c);   
console.log("已完成"+Qty1[0]); 
 // document.getElementById("tboxid").innerHTML = "已完成"+Qty1[0];
 
 tabl.insertRow(-1).insertCell(位置).innerText="已完成"+Qty1[0];
 
// document.getElementById("tboxid").innerHTML ='<input id="color_link" type="text" value="" size="5" />' ;
// console.log(document.getElementById("color_link").value);  
 
 
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
