/*
#Answer : Assuming,
	x = 9
	y = x + 3 = 12
	z = x + y = 21
	p = y + z = 33

*/
Stack st;
   //Enqueue(z), Enqueue(p), Dequeue(), Enqueue(y), Enqueue(z)
   st.push(z);
   cout << st.Top() << endl; // 31
   st.push(p);
   cout << st.Top() << endl; // 48
   st.pop();
   cout << st.Top() << endl; // 31
   st.push(y);
   cout << st.Top() << endl; // 527
   st.push(z);



