///<summary>
/// Vector2 is a template class. 
/// Its use is to handle two variables
/// of type T in the form of coordinate
/// geometry. The ideal variable types
/// are int, float and double. They're
/// types are defined as Vector2i/f/d.
///</summary>
///<Date>
/// 05/10/2018
///</Date>
///<author>
/// Jack Keogh.
///</author>


namespace jk
{
	template <class T>
	struct Vector2
	{
		// variables
		T x;
		T y;

		/// <summary>
		/// Default constructor
		/// 
		/// Initialises x and y variables to 0.
		/// </summary>
		Vector2() :
			x(0), y(0) {};

		/// <summary>
		/// Overload constructor
		/// 
		/// Initialises x and y to parameters
		/// passed in.
		/// </summary>
		/// <param name="vx">Overload value for x.</param>
		/// <param name="vy">Overload value for y.</param>
		Vector2(T vx, T vy) :
			x(vx), y(vy) {};

		/// <summary>
		/// Overload constructor
		/// 
		/// Initialises x and y to parameters
		/// of Vector2 passed in.
		/// </summary>
		/// <param name="v">Vector2 to overload x and y with.</param>
		Vector2(const Vector2& v) :
			x(v.x), y(v.y) {};

		/// <summary>
		/// Equals operator
		/// 
		/// Assigns x and y variables to param's
		/// x and y variables.
		/// </summary>
		/// <param name="v">Vector2 parameter.</param>
		/// <returns>This Vector2 Object.</returns>
		Vector2& operator=(const Vector2& v)
		{
			x = v.x;
			y = v.y;
			return *this;
		}

		/// <summary>
		/// Addition operator
		/// 
		/// Adds two vectors together and returns
		/// the result as a Vector2.
		/// </summary>
		/// <param name="r">Vector2 to be added.</param>
		/// <returns>A Vector2 object.</returns>
		Vector2 operator+(const Vector2 r) const
		{
			return Vector2(x + r.x, y + r.y);
		}

		/// <summary>
		/// Subtract operator
		/// 
		/// Subtracts two vectors and returns
		/// the result as a Vector2.
		/// </summary>
		/// <param name="r">Vector2 to be subtracted.</param>
		/// <returns>A Vector2 object.</returns>
		Vector2 operator-(const Vector2 r)
		{
			return Vector2(x - r.x, y - r.y);
		}
	};

	typedef Vector2<int> Vector2i;
	typedef Vector2<float> Vector2f;
	typedef Vector2<double> Vector2d;
}