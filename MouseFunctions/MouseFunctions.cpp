# ifndef RK_GRAPHICS_PROJECT_5
    # include "MouseFunctions.hpp"
    /**
     * @brief Method to Construct a New RKMouseFunctions Object
     */
    RKMouseFunctions::RKMouseFunctions() {}
    /**
     * @brief Method to Construct a New RKMouseFunctions Object
     * @param type Mouse Function Type
     */
    RKMouseFunctions::RKMouseFunctions(int type) {
        logger(RKG_LABEL INFO "Starting Mouse Functions ...");
        //-- Set OpenGL Ortho
        glOrtho(
            0.0, RK_MOUSE_FUNCTIONS_WINDOW_WIDTH,
            0.0, RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT,
            -1.0, 1.0
        );
        //-- Set OpenGL Frustum
        glFrustum(-100, 100, 0, 0, -20, 50);
        //-- Handle Mouse Function Type
        switch (type) {
            //-- Circle Radius
            case RK_MOUSE_FUNCTION_CIRCLE_RADIUS: {
                //-- Set Points Amount
                amount = RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT;
                //-- Set First Point Attributes
                first.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH / 2;
                first.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT / 2;
                first.color.r = 0;
                first.color.g = 255;
                first.color.b = 255;
                first.color.a = 255;
                //-- Set Second Point Attributes
                second.x = RK_MOUSE_FUNCTIONS_WINDOW_WIDTH / 2;
                second.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT / 2;
                second.color.r = 0;
                second.color.g = 100;
                second.color.b = 100;
                second.color.a = 255;
                //-- Create Line Object
                synshape::Line line;
                //-- Create Polygon Object
                synshape::Polygon polygon;
                //-- Create Vector to Store Circle Points
                std::deque<RKGPoint> points;
                //-- Define Theta Padding
                int theta_padd = 360 / amount;
                //-- Window Loop
                while (true) {
                    //-- Clear the Window
                    window.clear(0, 10, 18, 255);
                    //-- Set Second Point X and Y
                    second.x = window.mouse.x;
                    second.y = RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT - window.mouse.y;
                    //-- Draw Line from First to Second Point
                    // line.drawLine(
                    //     first,
                    //     second
                    // );
                    //-- Calculate Polygon Points
                    for (int i = 0; i < amount; i++) {
                        //-- Calculate X and Y
                        x_rel = second.x - first.x;
                        y_rel = first.y - second.y;
                        //-- Calculate Radius
                        distance = sqrt(pow(x_rel, 2) + pow(y_rel, 2));
                        //-- Create Temporary Point Object
                        RKGPoint tmp;
                        //-- Calculate X and Y of Temporary Point According to Radius and Theta
                        tmp.x = first.x + distance * cos(theta * M_PI / 180);
                        tmp.y = first.y + distance * sin(theta * M_PI / 180);
                        //-- Set Color of Temporary Point
                        tmp.color.r = 0;
                        tmp.color.g = 255; // * (i + 1) / amount;
                        tmp.color.b = 255; // * (i + 1) / amount;
                        tmp.color.a = 255; // * (i + 1) / amount;
                        //-- Add Temporary Point to Points Vector
                        points.push_back(tmp);
                        //-- Calculate Theta
                        theta = theta_padd * (i + 1);
                    }
                    //-- Draw Filled Polygon
                    // polygon.drawPolygon(points, true);
                    //-- Draw Lines to Create Line Polygon
                    for (int i = 0; i < amount; i++) {
                        line.drawLine(
                            points[i],
                            points[(i + 1) % amount]
                        );
                    }
                    //-- Clear Points Vector
                    points.clear();
                    //-- Update the Window
                    window.update();
                    //-- Delay to Reduce GPU Usage
                    std::this_thread::sleep_for(std::chrono::milliseconds(20));
                }
                break;
            }
            //-- Line Thickness
            case RK_MOUSE_FUNCTION_LINE_THICKNESS: {
                std::cout << "2" << std::endl;
                break;
            }
            //-- Rectangle Thickness
            case RK_MOUSE_FUNCTION_RECTANGLE_THICKNESS: {
                std::cout << "3" << std::endl;
                break;
            }
        };
    }
# endif // RK_GRAPHICS_PROJECT_5