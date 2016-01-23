/*
	Copyright (c) 2016 Xavier Leclercq

	Permission is hereby granted, free of charge, to any person obtaining a
	copy of this software and associated documentation files (the "Software"),
	to deal in the Software without restriction, including without limitation
	the rights to use, copy, modify, merge, publish, distribute, sublicense,
	and/or sell copies of the Software, and to permit persons to whom the
	Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
	THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
	IN THE SOFTWARE.
*/

/// @file

#ifndef _WX_CHARTS_WXCHARTRADIALGRIDOPTIONS_H_
#define _WX_CHARTS_WXCHARTRADIALGRIDOPTIONS_H_

#include <wx/colour.h>
#include <wx/font.h>

/// Styles for the wxChartRadialGrid element.
enum wxChartRadialGridStyle
{
	/// The grid is a series of concentric circles.
	wxCHARTRADIALGRIDSTYLE_CIRCULAR = 0,
	/// The grid is a series of polygons.
	wxCHARTRADIALGRIDSTYLE_POLYGONAL = 1
};

/// Options for the wxChartRadialGrid element.
class wxChartRadialGridOptions
{
public:
	/// Constructs a wxChartRadialGridOptions instance.
	wxChartRadialGridOptions(wxChartRadialGridStyle style);

	/// Gets the style of the radial grid.
	/// @return The style of the radial grid.
	wxChartRadialGridStyle GetStyle() const;

	/// Gets the width of the pen used to draw 
	/// the lines of the grid.
	/// @return The width of the grid lines.
	unsigned int GetLineWidth() const;
	/// Gets the color of the pen used to draw 
	/// the lines of the grid.
	/// @return The color of the grid lines.
	const wxColor& GetLineColor() const;

	/// Whether to display the value that
	/// each grid line represents.
	/// @retval true Display the values.
	/// @retval false Don't display the values.
	bool ShowLabels() const;
	/// Gets the font family to be used for 
	/// the labels.
	/// @return The font family.
	wxFontFamily GetFontFamily() const;
	/// Gets the font size to be used for 
	/// the labels.
	/// @return The font size in pixels.
	int GetFontSize() const;
	/// Gets the font style to be used for 
	/// the labels.
	/// @return The font style.
	wxFontStyle GetFontStyle() const;
	/// Gets the font color to be used for 
	/// the labels.
	/// @return The font color.
	const wxColor& GetFontColor() const;

private:
	wxChartRadialGridStyle m_style;
	unsigned int m_lineWidth;
	wxColor m_lineColor;
	bool m_showLabels;
	wxFontFamily m_fontFamily;
	int m_fontSize;
	wxFontStyle m_fontStyle;
	wxColor m_fontColor;
};

#endif
