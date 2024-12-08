# ifndef RK_GRAPHICS_PROJECT_5
    # include "MouseFunctions.hpp"
    /**
     * @brief Method to Draw Toolbar
     */
    void RKMouseFunctions::drawToolBar() {
        //-- Create Polygon Object
        synshape::Polygon polygon;
        //-- Define Toolbar Background Points
        RKGPoint p1, p2, p3, p4;
        //-- Set First Point Attributes
        p1.x = 0;
        p1.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        p1.color.r = 20;
        p1.color.g = 40;
        p1.color.b = 58;
        p1.color.a = 255;
        //-- Set Second Point Attributes
        p2.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH;
        p2.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        p2.color.r = 20;
        p2.color.g = 40;
        p2.color.b = 58;
        p2.color.a = 255;
        //-- Set Third Point Attributes
        p3.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH;
        p3.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        p3.color.r = 20;
        p3.color.g = 40;
        p3.color.b = 58;
        p3.color.a = 255;
        //-- Set Fourth Point Attributes
        p4.x = 0;
        p4.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        p4.color.r = 20;
        p4.color.g = 40;
        p4.color.b = 58;
        p4.color.a = 255;
        //-- Draw Toolbar Background
        polygon.drawPolygon(
            {p1, p2, p3, p4}, true
        );
        //-- Define Toolbar Sections Points
        RKGPoint s0_top, s0_bottom, s1_top, s1_bottom, s2_top, s2_bottom, s3_top, s3_bottom, s4_top, s4_bottom;
        //-- Set Points Attributes
        s0_top.x = 0;
        s0_top.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        s0_bottom.x = 0;
        s0_bottom.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        s1_top.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH;
        s1_top.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        s1_bottom.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH;
        s1_bottom.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        s2_top.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH * 2;
        s2_top.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        s2_bottom.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH * 2;
        s2_bottom.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        s3_top.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH * 3;
        s3_top.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        s3_bottom.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH * 3;
        s3_bottom.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        s4_top.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH;
        s4_top.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        s4_bottom.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH;
        s4_bottom.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        //-- Set Line Section
        sec_line.start = s0_top;
        sec_line.end = s1_bottom;
        //-- Set Rectangle Section
        sec_rect.start = s1_top;
        sec_rect.end = s2_bottom;
        //-- Set Circle Section
        sec_circle.start = s2_top;
        sec_circle.end = s3_bottom;
        //-- Draw Toolbar Sections if Enabled
        # if RK_MOUSE_FUNCTION_SHOW_TOOLBAR_SECTIONS
            s0_top.color.r = 255;
            s0_top.color.g = 255;
            s0_top.color.b = 0;
            s0_top.color.a = 255;
            s1_top.color.r = 0;
            s1_top.color.g = 255;
            s1_top.color.b = 0;
            s1_top.color.a = 255;
            s2_top.color.r = 0;
            s2_top.color.g = 0;
            s2_top.color.b = 255;
            s2_top.color.a = 255;
            s3_top.color.r = 0;
            s3_top.color.g = 255;
            s3_top.color.b = 255;
            s3_top.color.a = 255;
            polygon.drawPolygon(
                {s0_top, s1_top, s1_bottom, s0_bottom}, false
            );
            polygon.drawPolygon(
                {s1_top, s2_top, s2_bottom, s1_bottom}, false
            );
            polygon.drawPolygon(
                {s2_top, s3_top, s3_bottom, s2_bottom}, false
            );
        # endif // RK_MOUSE_FUNCTION_SHOW_TOOLBAR_SECTIONS
        //-- Define Center of Sections
        RKGPoint center_line, center_rect, center_circle;
        //-- Set Center Line Point
        center_line.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH / 2;
        center_line.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT / 2;
        //-- Set Center Rectangle Point
        center_rect.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH + RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH / 2;
        center_rect.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT / 2;
        //-- Set Center Circle Point
        center_circle.x = RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH * 2 + RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH / 2;
        center_circle.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT / 2;
        //-- Create Degree Object
        RKGDegree degree;
        degree.degree = 0;
        //-- Create Scale Object
        RKGScale scale;
        scale.x = 0.4;
        scale.y = 0.4;
        scale.z = 0.4;
        //-- Draw Line Section Text
        syntext::Text text_line(
            "Line",
            center_line,
            {0, 255, 255, 255},
            degree,
            scale,
            true,
            false
        );
        //-- Draw Rectangle Section Text
        syntext::Text text_rect(
            "Rect",
            center_rect,
            {0, 255, 255, 255},
            degree,
            scale,
            true,
            false
        );
        //-- Draw Circle Section Text
        syntext::Text text_circle(
            "Circle",
            center_circle,
            {0, 255, 255, 255},
            degree,
            scale,
            true,
            false
        );
    }
    /**
     * @brief Method to Handle Mouse
     * @note This Method is Used to Bind Mouse Inside the Window
     */
    void RKMouseFunctions::handleMousePos() {
        //-- Bind Window Mouse X-Axis Position Inside the Window
        if (mouse_window.x < 0) {
            mouse_window.x = 0;
        } else if (mouse_window.x > RK_MOUSE_FUNCTIONS_WINDOW_WIDTH) {
            mouse_window.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH;
        }
        //-- Bind Window Mouse Y-Axis Position Inside the Window
        if (mouse_window.y < 0) {
            mouse_window.y = 0;
        } else if (mouse_window.y > RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT) {
            mouse_window.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        } else {
            //-- Set Current Section to Window
            section = RK_MOUSE_FUNCTIONS_WINDOW_SECTION_CANVAS;
        }
        //-- Bind Toolbar Mouse X-Axis Inside the Toolbar
        if (mouse_toolbar.x < 0) {
            mouse_toolbar.x = 0;
        } else if (mouse_toolbar.x > RK_MOUSE_FUNCTIONS_WINDOW_WIDTH) {
            mouse_toolbar.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH;
        }
        //-- Bind Toolbar Mouse Y-Axis Inside the Toolbar
        if (mouse_toolbar.y < RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT) {
            mouse_toolbar.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT;
        } else if (mouse_toolbar.y > RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT) {
            mouse_toolbar.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT;
        } else {
            //-- Set Current Section to Toolbar
            section = RK_MOUSE_FUNCTIONS_WINDOW_SECTION_TOOLBAR;
        }
    }
    /**
     * @brief Method to Show Mouse Points
     */
    void RKMouseFunctions::showMousePoints() {
        //-- Create Points for Window Mouse and Toolbar Mouse
        RKGPoint p_window, p_toolbar;
        //-- Set Window Mouse Position
        p_window.x = mouse_window.x;
        p_window.y = mouse_window.y;
        p_window.color.r = 255;
        p_window.color.g = 0;
        p_window.color.b = 0;
        p_window.color.a = 255;
        p_window.size = 10;
        //-- Set Toolbar Mouse Position
        p_toolbar.x = mouse_toolbar.x;
        p_toolbar.y = mouse_toolbar.y;
        p_toolbar.color.r = 0;
        p_toolbar.color.g = 255;
        p_toolbar.color.b = 0;
        p_toolbar.color.a = 255;
        p_toolbar.size = 10;
        //-- Create Point Object
        synshape::Point point;
        //-- Draw Window Mouse Position
        point.drawPoint(p_window);
        //-- Draw Toolbar Mouse Position
        point.drawPoint(p_toolbar);
    }
    /**
     * @brief Method to Handle Draw Mode by Clicking on Toolbar
     */
    void RKMouseFunctions::handleDrawMode() {
        //-- Check if Mouse is Pressed
        if (window.mouse.left_is_pressed) {
            //-- Check Sections
            if (section == RK_MOUSE_FUNCTIONS_WINDOW_SECTION_TOOLBAR) {
                //-- Set Status Variables
                status_start = false, status_end = false, new_click = false;
                //-- Check Line Section
                if (sec_line.isInside(mouse_toolbar)) {
                    draw_mode = RK_MOUSE_FUNCTIONS_DRAW_MODE_LINE;
                    logger(RKG_LABEL INFO "Draw Mode: Line");
                    thickness = 1.0;
                } else if (sec_rect.isInside(mouse_toolbar)) {
                    draw_mode = RK_MOUSE_FUNCTIONS_DRAW_MODE_RECTANGLE;
                    logger(RKG_LABEL INFO "Draw Mode: Rectangle");
                    thickness = 1.0;
                } else if (sec_circle.isInside(mouse_toolbar)) {
                    draw_mode = RK_MOUSE_FUNCTIONS_DRAW_MODE_CIRCLE;
                    logger(RKG_LABEL INFO "Draw Mode: Circle");
                    thickness = 1.0;
                } else {
                    draw_mode = RK_MOUSE_FUNCTIONS_DRAW_MODE_NONE;
                    logger(RKG_LABEL INFO "Draw Mode: None");
                    thickness = 1.0;
                }
            }
        }
        //-- Reset Draw Mode if Right Mouse Button is Pressed
        if (window.mouse.right_is_pressed) {
            //-- Set Status Variables
            status_start = false, status_end = false, new_click = false;
            draw_mode = RK_MOUSE_FUNCTIONS_DRAW_MODE_NONE;
            logger(RKG_LABEL INFO "Draw Mode: None");
        }
    }
    /**
     * @brief Method to Construct a New RKMouseFunctions Object
     */
    RKMouseFunctions::RKMouseFunctions() {
        logger(RKG_LABEL INFO "Starting Mouse Functions ...");
        //-- Set Draw Mode to None
        draw_mode = RK_MOUSE_FUNCTIONS_DRAW_MODE_NONE;
        //-- Set OpenGL Ortho
        glOrtho(
            0.0, RK_MOUSE_FUNCTIONS_WINDOW_WIDTH,
            0.0, RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT,
            -1.0, 1.0
        );
        //-- Create Line Object
        synshape::Line line;
        //-- Create Polygon Object
        synshape::Polygon polygon;
        //-- Create Vector to Store Circle Points
        std::deque<RKGPoint> points, points2;
        //-- Define Theta Padding
        int theta_padd, theta = 360 / RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT;
        //-- Set Initial Status
        status_start = false, status_end = false, new_click = false;
        //-- Set Initial Line Thickness
        thickness = 1.0;
        //-- Set Initial Mouse Rectangle Objects
        RKGPoint p1, p2, p3, p4, p;
        RKGColor p_color, p2_color;
        //-- Set Initial Fill Status
        bool filled = false;
        //-- Window Loop
        while (true) {
            // std::cout << thickness << std::endl;
            //-- Clear the Window
            window.clear(0, 10, 18, 255);
            //-- Set Toolbar Mouse Position
            mouse_toolbar.x = window.mouse.x;
            mouse_toolbar.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
            //-- Set Window Mouse Position
            mouse_window.x = window.mouse.x;
            mouse_window.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
            //-- Handle Mouse Positions
            handleMousePos();
            //-- Show Mouse Points if Enabled
            # if RK_MOUSE_FUNCTION_SHOW_MOUSE_POINTS
                showMousePoints();
            # endif // RK_MOUSE_FUNCTION_SHOW_MOUSE_POINTS
            p_color.r = 210;
            p_color.g = 174;
            p_color.b = 48;
            p_color.a = 255;
            p2_color.r = 255;
            p2_color.g = 255;
            p2_color.b = 48;
            p2_color.a = 255;
            p1.x = window.mouse.x - 5;
            p1.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y - 5;
            p2.x = window.mouse.x + 5;
            p2.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y - 5;
            p3.x = window.mouse.x + 5;
            p3.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y + 5;
            p4.x = window.mouse.x - 5;
            p4.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y + 5;
            p.x = window.mouse.x;
            p.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
            p1.color = p_color;
            p2.color = p_color;
            p3.color = p_color;
            p4.color = p_color;
            p.color = p2_color;
            polygon.drawPolygon(
                {p1, p2, p3, p4}, false
            );
            //-- Handle Draw Mode
            handleDrawMode();
            //-- Handle Drawing According to Mode
            switch (draw_mode) {
                //-- Draw Line
                case RK_MOUSE_FUNCTIONS_DRAW_MODE_LINE: {
                    //-- Check if Section is Inside Canvas
                    if (section == RK_MOUSE_FUNCTIONS_WINDOW_SECTION_CANVAS) {
                        //-- Set Start and End Points if Not Set When Mouse is Pressed
                        if (window.mouse.left_is_pressed == true && status_start == false && status_end == false && new_click == false) {
                            logger(RKG_LABEL INFO "Start Point Set");
                            start_draw_point.x = window.mouse.x;
                            start_draw_point.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
                            start_draw_point.color.r = 0;
                            start_draw_point.color.g = 255;
                            start_draw_point.color.b = 170;
                            start_draw_point.color.a = 255;
                            status_start = true;
                            new_click = true;
                        } else if (window.mouse.left_is_pressed == true && status_end == false && status_start == true && new_click == false) {
                            logger(RKG_LABEL INFO "End Point Set");
                            end_draw_point.x = window.mouse.x;
                            end_draw_point.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
                            end_draw_point.color.r = 0;
                            end_draw_point.color.g = 255;
                            end_draw_point.color.b = 170;
                            end_draw_point.color.a = 255;
                            status_end = true;
                            new_click = true;
                        }
                        //-- Reset New Click
                        if (window.mouse.left_is_pressed == false && new_click == true) {
                            new_click = false;
                        }
                        //-- Draw Pre Drawn Line
                        if (status_start && !status_end) {
                            line.drawLine(
                                start_draw_point,
                                p,
                                thickness
                            );
                        }
                    }
                    //-- Make Sure Line Thickness More than 0.5
                    if (thickness < 0.5) {
                        thickness = 0.5;
                    }
                    //-- Handle Thickness of Line
                    thickness = window.mouse.wheel_value;
                    //-- Draw Line if First and Second Points are Set
                    if (status_start && status_end) {
                        line.drawLine(
                            start_draw_point,
                            end_draw_point,
                            thickness
                        );
                    }
                    break;
                }
                //-- Draw Rectangle
                case RK_MOUSE_FUNCTIONS_DRAW_MODE_RECTANGLE: {
                    //-- Check if Section is Inside Canvas
                    if (section == RK_MOUSE_FUNCTIONS_WINDOW_SECTION_CANVAS) {
                        //-- Set Start and End Points if Not Set When Mouse is Pressed
                        if (window.mouse.left_is_pressed == true && status_start == false && status_end == false && new_click == false) {
                            logger(RKG_LABEL INFO "Start Point Set");
                            start_draw_point.x = window.mouse.x;
                            start_draw_point.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
                            start_draw_point.color.r = 0;
                            start_draw_point.color.g = 255;
                            start_draw_point.color.b = 170;
                            start_draw_point.color.a = 255;
                            status_start = true;
                            new_click = true;
                        } else if (window.mouse.left_is_pressed == true && status_end == false && status_start == true && new_click == false) {
                            logger(RKG_LABEL INFO "End Point Set");
                            end_draw_point.x = window.mouse.x;
                            end_draw_point.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
                            end_draw_point.color.r = 0;
                            end_draw_point.color.g = 255;
                            end_draw_point.color.b = 170;
                            end_draw_point.color.a = 255;
                            status_end = true;
                            new_click = true;
                        }
                        //-- Reset New Click
                        if (window.mouse.left_is_pressed == false && new_click == true) {
                            new_click = false;
                        }
                        //-- Draw Pre Drawn Rectangle
                        if (status_start && !status_end) {
                            polygon.drawRectangle(
                                start_draw_point,
                                p,
                                filled,
                                thickness
                            );
                        }
                    }
                    //-- Make Sure Line Thickness More than 0.5
                    if (thickness < 0.5) {
                        thickness = 0.5;
                    }
                    //-- Check if F Key is Pressed
                    if (window.keyboard.is_pressed && window.keyboard.key == SDLK_f) {
                        filled = !filled;
                    }
                    //-- Handle Thickness of Line
                    thickness = window.mouse.wheel_value;
                    //-- Draw Line if First and Second Points are Set
                    if (status_start && status_end) {
                        polygon.drawRectangle(
                            start_draw_point,
                            end_draw_point,
                            filled,
                            thickness
                        );
                    }
                    break;
                }
                //-- Draw Circle
                case RK_MOUSE_FUNCTIONS_DRAW_MODE_CIRCLE: {
                    //-- Check if Section is Inside Canvas
                    if (section == RK_MOUSE_FUNCTIONS_WINDOW_SECTION_CANVAS) {
                        //-- Set Start and End Points if Not Set When Mouse is Pressed
                        if (window.mouse.left_is_pressed == true && status_start == false && status_end == false && new_click == false) {
                            logger(RKG_LABEL INFO "Start Point Set");
                            start_draw_point.x = window.mouse.x;
                            start_draw_point.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
                            start_draw_point.color.r = 0;
                            start_draw_point.color.g = 255;
                            start_draw_point.color.b = 170;
                            start_draw_point.color.a = 255;
                            status_start = true;
                            new_click = true;
                        } else if (window.mouse.left_is_pressed == true && status_end == false && status_start == true && new_click == false) {
                            logger(RKG_LABEL INFO "End Point Set");
                            end_draw_point.x = window.mouse.x;
                            end_draw_point.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
                            end_draw_point.color.r = 0;
                            end_draw_point.color.g = 255;
                            end_draw_point.color.b = 170;
                            end_draw_point.color.a = 255;
                            status_end = true;
                            new_click = true;
                            x_rel2 = end_draw_point.x - start_draw_point.x;
                            y_rel2 = end_draw_point.y - start_draw_point.y;
                        }
                        //-- Set Relative X and Y of Second Point to First Point
                        x_rel = p.x - start_draw_point.x;
                        y_rel = p.y - start_draw_point.y;
                        //-- Show Pre Drawn Shapes
                        if (status_start && !status_end) {
                            //-- Show Pre Drawn Line
                            line.drawLine(
                                start_draw_point,
                                p,
                                thickness
                            );
                            //-- Calculate Distance between First and Second Points
                            distance2 = sqrt(pow(x_rel, 2) + pow(y_rel, 2));
                            //-- Generate Points According to Configured Amount from Start Point with Radius of Distance
                            for (int i = 0; i < RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT; i++) {
                                theta = i * 360 / RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT;
                                theta_padd = theta + 90;
                                x_rel = distance2 * cos(theta_padd * M_PI / 180);
                                y_rel = distance2 * sin(theta_padd * M_PI / 180);
                                RKGPoint p;
                                p.x = start_draw_point.x + x_rel;
                                p.y = start_draw_point.y + y_rel;
                                p.color.r = 0;
                                p.color.g = 255;
                                p.color.b = 170;
                                p.color.a = 255;
                                points2.push_back(p);
                            }
                            //-- Draw Circle Polygon
                            polygon.drawPolygon(
                                points2,
                                false
                            );
                            //-- Reset Points
                            points2.clear();
                        }
                        //-- Reset New Click
                        if (window.mouse.left_is_pressed == false && new_click == true) {
                            new_click = false;
                        }
                    }
                    //-- Make Sure Line Thickness More than 0.5
                    if (thickness < 0.5) {
                        thickness = 0.5;
                    }
                    //-- Handle Thickness of Line
                    thickness = window.mouse.wheel_value;
                    //-- Draw Circle if First and Second Points are Set
                    if (status_start && status_end) {
                        //-- Calculate Distance between First and Second Points
                        distance = sqrt(pow(x_rel2, 2) + pow(y_rel2, 2));
                        //-- Generate Points According to Configured Amount from Start Point with Radius of Distance
                        for (int i = 0; i < RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT; i++) {
                            theta = i * 360 / RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT;
                            theta_padd = theta + 90;
                            x_rel = distance * cos(theta_padd * M_PI / 180);
                            y_rel = distance * sin(theta_padd * M_PI / 180);
                            RKGPoint p;
                            p.x = start_draw_point.x + x_rel;
                            p.y = start_draw_point.y + y_rel;
                            p.color.r = 0;
                            p.color.g = 255;
                            p.color.b = 170;
                            p.color.a = 255;
                            points.push_back(p);
                        }
                        //-- Draw Circle Polygon
                        polygon.drawPolygon(
                            points,
                            false
                        );
                        //-- Reset Points
                        points.clear();
                    }
                    break;
                }
                //-- Default
                default: {
                    break;
                }
            }
            //-- Draw Toolbar
            drawToolBar();
            //-- Update the Window
            window.update();
            //-- Delay to Reduce GPU Usage
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
# endif // RK_GRAPHICS_PROJECT_5