#include <iostream>

class Vector3D
{
private:
	double m_x, m_y, m_z;
public:
	Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	void print()
	{
		std::cout << "Вектор(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
	class Point3D
	{
	private:
		double m_x, m_y, m_z;

	public:
		Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
			: m_x(x), m_y(y), m_z(z)
		{

		}

		void print()
		{
			std::cout << "Точка(" << m_x << " , " << m_y << " , " << m_z << ")\n";
		}

		void moveByVector(Vector3D& vec)
		{
			vec.m_x += m_x;
			vec.m_y += m_y;
			vec.m_z += m_z;
			std::cout << "Точка після зміни координат(" << vec.m_x << " , " << vec.m_y << " , " << vec.m_z << ")\n";
		}
	};
};

int main()
{
	system("chcp 1251>nul");
	Vector3D v(3.0, 3.0, -2.0);
	Vector3D::Point3D p(3.0, 4.0, 5.0);

	p.print();
	v.print();
	p.moveByVector(v);
	
	return 0;
}