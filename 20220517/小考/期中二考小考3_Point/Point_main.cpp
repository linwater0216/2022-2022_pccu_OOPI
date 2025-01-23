#include"Point.cpp"

int main() {
	point point1;
	point point2;
	point point3;
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	point1.seta(a);
	point1.seta(b);
	point2.seta(c);
	point2.seta(d);
	point3.seta(e);
	point3.seta(f);
	cout << "(" << point1.geta() << "," << point1.getb() << ")+";
	cout << "(" << point2.geta() << "," << point2.getb() << ")-";
	cout << "(" << point3.geta() << "," << point3.getb() << ")=";
	cout << "(" << point1.geta()- point2.geta()+ point3.geta() << "," << point1.geta()- point2.geta()+point3.getb();
}