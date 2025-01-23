/*
承上題
同樣以分開三個檔案設計 Rectangle 物件
於類別內設計適當的建構者
data fields(private) 為 width(double)、height(double)
function 有 setWidth、getWidth、setHeight、getHeight、getArea
但以主程式的觀點來設計 swapByReference 以及 swapByPointer
可參考課本範例 TestPointerArgument.cpp

函數名稱與形式為
swapByReference(Rectangle &r1, Rectangle &r2)
swapByPointer(Rectangle *r1, Rectangle *r2)

輸入說明：
請依序輸入兩組 width 與 height。

輸出說明：
將輸入的 width 與 height 建立兩個物件，並將兩物件利用 pass-by-reference 以及 pass-by-pointer 以進行交換，最後輸出。

範例輸入：
2.5 3.3 10.5 2.2

範例輸出(以面積輸出)：
SwapByReference:8.25 23.10 to 23.10 8.25
SwapByPointer:23.10 8.25 to 8.25 23.10
*/