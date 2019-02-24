#include "canvas.h"

using component_t = unsigned char;
/**
 * @brief Constructor Default
 */
rast::Canvas::Canvas(const size_t width, const size_t height)
: m_width(width)
, m_height(height)
, m_fill_color (Color(0,0,0) )
, m_bkg_color (Color (255,255,255))
, m_pixels ( new component_t[(width*height*3)])
{ /*empty*/ }
            
/**
 * @brief Set the color of a pixel on the canvas
 */
//TODO: change x and y to Point2D
void rast::Canvas::pixel (const long x, const long y, const Color &c){
   // m_pixels[(x*m_width)+y] = c;
}
 
/**
 * @brief Get the pixel color from canvas
 */
rast::Color rast::Canvas::pixel (const long x, const long y) const{
    return m_pixels[(x*m_width)+y];
}

/**
 * @brief Get the canvas width
 */
size_t 	rast::Canvas::width (void) const{
    return m_width;
}

/**
 * @brief Get the canvas height
 */
size_t 	rast::Canvas::height (void) const{
    return m_height;
}

/**
 * @brief Get the canvas pixels as an array of unsigned char.
 */
component_t* rast::Canvas::pixels (void) const{
    return m_pixels.get();
}
 
/**
 * @brief Draw a line between two points 2D
 */
void rast::Canvas::lineDDA (const long x, const long y, const long x1, const long y1){
    
}

void rast::Canvas::bkg_color(const Color &c){
    m_bkg_color = c;
}

void rast::Canvas::fill_color(const Color &c){
    m_fill_color = c;
}