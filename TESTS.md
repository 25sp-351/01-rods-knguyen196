**Test Case 1: Normal Input** 

Rod Length: 5  
Cuts:  
1 2  
2 5  

Expected output:  
Cuts made:  
1 @ 1 = 2  
2 @ 2 = 10  
Remainder: 0  
Total Price: 12  

---

**Test Case 2: Single input**

Rod Length: 3  
Cuts:  
3 9  

Expected output:  
Cuts made:  
1 @ 3 = 9  
Remainder: 0  
Total Price: 9  

---

**Test Case 3: More than 2 inputs**  

Rod Length: 10  
Cuts:  
1 1  
3 4  
5 6  

Expected output:  
Cuts made:  
1 @ 1 = 1  
3 @ 3 = 12  
Remainder: 0  
Total Price: 13  

---

**Test Case 4: Rod with remainder**

Rod Length: 4  
Cuts:  
3 3  

Expected output:  
Cuts made:  
1 @ 3 = 3  
Remainder: 1  
Total Price: 3  

---

**Test Case 5: Invalid Input**
  
Rod Length: -1  

Expected output:  
Invalid rod length.  


---

**Test Case 6: No Cuts Made**
  
Rod Length: 5  
Cuts:  
Ctrl + D  
Enter  

Expected output:  
Cuts made:  
Remainder: 5  
Total Price: 0  
