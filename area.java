class AREA
{ 
public double l;
public double bd;
public double area;
public void rect_area(double a,double b)
{
 l=a;
 bd=b; 
 System.out.println("LENGTH:"+l);
 System.out.println("BREADTH:"+bd);
 area=l*bd;
 System.out.println("AREA of the rectangle:"+area);
}
}
 class rectangle
{ 
	public static void main(String args[])
	{ AREA obj=new AREA();
          obj.rect_area(4.5,8.2);
        }
}

