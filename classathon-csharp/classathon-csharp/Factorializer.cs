using System;
using System.Collections.Generic;
using System.Text;

namespace classathon_csharp
{
	public class Factorializer
	{
		public static ulong Factorialize(int num)
		{
			if (num == 0)
				return 1;
			else
				return (ulong)num * Factorialize(num - 1);
		}
	}
}
