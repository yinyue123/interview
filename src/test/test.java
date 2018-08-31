package test;

import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class test{
	public static String get() {
		Scanner in=new Scanner(System.in);
		String readLine=in.nextLine();
		return readLine;
	}
	public static List<Integer> getInt() {
		List<Integer> temp=new ArrayList<Integer>();
		Scanner in=new Scanner(System.in);
		while(in.hasNextInt()) {
			temp.add(in.nextInt());
		}
		return temp;
	}
	public static void print(String print) {
		System.out.print(print);
	}
	public static void println(String printLine) {
		System.out.println(printLine);
	}
    
	public static void main(String arg[]) {
		println("输入:");
		//String str=get();
		//String[] temp=str.split(" ");
		//println("输出:");
		//print(String.valueOf(Integer.valueOf(temp[0])+Integer.valueOf(temp[1])));
		//print("^");
		//stackTest();
		//queneTest();
		//testRegex(get());
		//getCourse();
		//listTest();
		//print("$");
		//int[] arr= {5,3,2,1,0,4};
		//println(getArray(arr,arr.length));
		//sort(arr,arr.length);
		//println(getArray(arr,arr.length));
		//test3();
		plzh();
	}
	public static void plzh() {
		Scanner in=new Scanner(System.in);
		int n=0;
		int m=0;
		n=in.nextInt();
		m=in.nextInt();
		combSeleCount(n,m);
		combSele(n,m,"");
		println("--------");
		combSeleCount2(n,m);
		combSele2(n,m,0,"");
		println("--------");
	}
	public static int fact(int n) {
		int sum=1;
		for(int i=1;i<=n;i++)
			sum*=i;
		return sum;
	}
	public static void combSeleCount(int n,int m) {
		println("A(n,m)=n!/m!="+fact(n)/fact(n-m));
	}
	static int line=0;
	public static void combSele(int n,int m,String str) { //n取m
		if(m==0) {
			println((++line)+"\t"+str);
			return ;
		}
		for(int i=1;i<=n;i++) {
			if(str.indexOf(" "+String.valueOf(i)+" ")==-1)
				combSele(n,m-1,str+" "+(i)+" ");
		}
	}
	public static void combSeleCount2(int n,int m) {
		println("C(n,m)=n!/(m!*(n-m)!)="+fact(n)/(fact(m)*fact(n-m)));
	}
	static int line2=0;
	public static void combSele2(int n,int m,int pos,String str) { //n取m
		if(m==0) {
			println((++line2)+"\t"+str);
			return ;
		}
		for(int i=pos+1;i<=n;i++) {
			combSele2(n,m-1,i,str+" "+i+" ");
		}
	}
	
	public static void test3() {
		Scanner in=new Scanner(System.in);
		String con1,con2,con3;
		con1="";
		con2="";
		con3="";
		ArrayList<String> temp1=new ArrayList<String>();
		while(in.hasNextLine()) {
			String temp=in.nextLine();
			String data=temp;
			if(data.indexOf(";")!=-1) {
				data=temp.substring(0,temp.indexOf(";"));
			}
			if(data.indexOf("[")!=-1) {
				//println(data+"1");
				con1=data.substring(data.indexOf("[")+"[".length(),data.indexOf("]"));
				Collections.sort(temp1,new Comparator<String>() {
		            @Override
		            public int compare(String o1, String o2) {
		                if(o1.compareTo(o2) > 0){
		                    return 1;
		                }
		                if(o1.compareTo(o2) < 0){
		                    return -1;
		                }
		                if(o1.compareTo(o2) == 0){
		                    return 0;
		                }
		                return 0;
		            }
		        });
				for(String temp666:temp1) {
					println(temp666);
				}
				temp1=new ArrayList<String>();
			}
			if(data.indexOf("=")!=-1) {
				//println(data+"2");
				con2=(data.substring(0,data.indexOf("="))).trim();
				con3=data.substring(data.indexOf("=")+1,data.length()).trim();
				//println("--{"+con1+"}"+"{"+con2+"}"+"{"+con3+"}");
				temp1.add("{"+con1+"}"+"{"+con2+"}"+"{"+con3+"}");
			}
			if(temp.equals("")) {
				break;
			}
		}
		//println("666");
		Collections.sort(temp1,new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if(o1.compareTo(o2) > 0){
                    return 1;
                }
                if(o1.compareTo(o2) < 0){
                    return -1;
                }
                if(o1.compareTo(o2) == 0){
                    return 0;
                }
                return 0;
            }
        });
		//println(temp1.toString());
		for(String temp666:temp1) {
			println(temp666);
		}
	}
	public static void test2() {
		Scanner in=new Scanner(System.in);
		String temp=in.nextLine();
		LinkedList<String> linkedList=new LinkedList<String>();
		for(int i=0;i<temp.length();i++) {
			if(linkedList.indexOf(String.valueOf(temp.charAt(i)))==-1)
				linkedList.add(String.valueOf(temp.charAt(i)));
		}
		println(linkedList.toString()+linkedList.size());
		boolean a=true;
		for(int i=linkedList.size()-1;i>=0;i--) {
			if(a==true) {
				if(linkedList.get(i).equals("0")==false) {
					a=false;
					print(linkedList.get(i));
				}
			}else
				print(linkedList.get(i));
		} 
	}
	public static void test1() {
		/*String[] derect= {"N","W","S","E"};
		int times;
		String temp;
		int numb=0;
		Scanner in=new Scanner(System.in);
		times=in.nextInt();
		temp=in.nextLine();
		temp=in.nextLine();
		println(temp);
		for(int i=0;i<times;i++) {
			if(temp.charAt(i)=='L') {
				numb++;
			} else if(temp.charAt(i)=='R') {
				numb--;
			}
		}
		print(derect[(4+numb)%4]);*/
	}
	public static void swap(int[] array,int len,int n) {
		int temp;
		temp=array[0];
		array[0]=array[n];
		array[n]=temp;
	}
	public static String getArray(int[] array,int length) {
		String str="";
		for(int temp:array) {
			str=str+temp+" ";
		}
		return str;
	}
	public static void sort(int[] array,int len) {
		for(int i=len-1;i>0;i--){
			if(array[i]==i)
				continue;
			swap(array, len, array[i]);
			print(getArray(array,len)+"|");
			swap(array, len, i);
			println(getArray(array,len));
		}/*
		for(int i=len-1;i>0;i--) {
			if(i==array[i])
				continue;
			swap(array,len,array[i]);
			print(getArray(array,len)+"|");
			swap(array,len,i);
			println(getArray(array,len));
		}*/
		println("");
	}
	public static void listTest() {
		LinkedList<Integer> linkedList=new LinkedList<Integer>();
		linkedList.addFirst(123);
		println("data:"+linkedList);
		linkedList.addLast(456);
		println("data:"+linkedList);
		println("getFirst:"+linkedList.getFirst());
		println("removeFirst:"+linkedList.removeFirst());
		println("isEmpty:"+linkedList.isEmpty());
		println("-------");
		List<Integer> list=new ArrayList<Integer>();
		list.add(123);
		list.add(456);
		list.add(789);
		println("data:"+list);
		list.add(1,111);
		println("data:"+list);
		list.set(1, 222);
		println("data:"+list);
		println("get:"+list.get(2));
		list.remove(2);
		println("data:"+list);
		println("size:"+list.size());
		Iterator it=list.iterator();
		while(it.hasNext()) {
			print(it.next()+" ");
		}
		println("");
		list.clear();
		println("data:"+list);
		
	}
	public static void testRegex(String input) {
		String[] str=new String[] {
				"[0-9]*",
				"^(1\\d{2}|2[0-4]\\d|25[0-5]|[1-9]\\d|[1-9])\\.(1\\d{2}|2[0-4]\\d|25[0-5]|[1-9]\\d|\\d)\\.(1\\d{2}|2[0-4]\\d|25[0-5]|[1-9]\\d|\\d)\\.(1\\d{2}|2[0-4]\\d|25[0-5]|[1-9]\\d|\\d)$",
				"^((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)::((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)$"};
		println(input);
		for(String s:str) {
			println(input);
			if(input.matches(s)) {
				println("yes");
			}else {
				println("no");
			}
		}
	}
	public static void getCourse() {
		String org="<td width=\"112\" height=\"20\" class=td_biaogexian><p align=\"center\">CS31003&nbsp;</p></td>";
		String match="^<td.*?class=td_biaogexian>(.+)</td>$";
		String start="<p align=\"center\">";
		String end="&nbsp;</p>";
		String result=org.substring(org.indexOf(start)+start.length(),org.indexOf(end));
		println("result:"+org.matches(match));
		println("result2:"+result);
	}
	public static void stackTest() {
		Stack stack=new Stack();
		stack.push(new Integer(111));
		stack.push("abcde");
		stack.push(new Double(123.123));
		printStack(stack);
		println("size"+stack.size());
		println("Position abcde in "+stack.search("abcde"));
		println("Position 111 in "+stack.search(111));
		println("Element "+stack.peek()+" peek");
		println("Element "+stack.pop()+" pop");//弹出元素
		println("Element "+stack.pop()+" pop");
		println("Element "+stack.pop()+" pop");
	}
	public static void queneTest() {
		Queue<String> queue=new LinkedList<String>();
		queue.offer("a");
		queue.offer("b");
		queue.offer("c");
		for(String q : queue)
			println(q);
		println("size"+queue.size());
		println("poll="+queue.poll());//弹出元素
		println("element="+queue.element());
		println("peek="+queue.peek());
		for(String q : queue)
			println(q);
	}
	public static void printStack(Stack<Integer> stack) {
		if(stack.empty()) 
			print("Stack is empty");
		else {
			print("Element is:");
			Enumeration items=stack.elements();
			while(items.hasMoreElements()) {
				print(items.nextElement()+" ");
			}
		}
		println("");
	}
}