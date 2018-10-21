﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPPatternsWpf.CompositePattern
{
    class Rectangle: CompositeGraphic, IGraphic
    {
        public Rectangle(float xPos, float yPos, float w, float h):base()
        {
            x = xPos;
            y = yPos;
            width = w;
            height = h;
        }

        public new void Print()
        {
            Console.WriteLine("Rectangle at position, x: " + x + ", y: "+ y + ", size, width: " + width + ", height: " + height);
        }
    }
}
