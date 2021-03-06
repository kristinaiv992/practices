class Composition {
    public:
        Composition(Composition*);
        void Repair () {
            Coord* natural;
            Coord* stretchability;
            Coord* shrinkability;
            int componentCount;
            int* breaks;
            // create arrays of components with desired counts
            // determine where are the line breaks to the next row
            int breakCount = _compositor->Compose(natural, stretchability, shrinkability, componentCount, _lineWidth, breaks);
            
            // set the components according to the breaks for the next row.
        }
        
    private:
        Compositor* _compositor;
        Component* _component; // list of components
        
        int _componentCount; // number of components
        int _lineWidth; // width of composition line
        int* _lineBreaks; // position of the characters for the next row of components
        int _lineCount; // number of lines
};
