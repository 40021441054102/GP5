# ifndef RK_GRAPHICS_PROJECT_5
    /**
     * @file MouseFunctions.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Ramtin Kosari's Mouse Functions - Term 7 Graphics Project 5
     * @date 2024-11-14
     */
    # define RK_GRAPHICS_PROJECT_5
    /**
     * @brief Ramtin Kosari's Mouse Functions
     * @def RK_GRAPHICS_PROJECT_MOUSE_FUNCTIONS
     * @note This is Part of Term 7 Graphics Project 5
     */
    # define RK_GRAPHICS_PROJECT_MOUSE_FUNCTIONS
    //-- Check if Project is being Compiled by RKACPB
    # ifdef RKACPB
        //-- Check if Configuration File is Configured
        # ifndef HAS_RKACPB_MODULE_CONFIGS5
            # error "Configuration File is Required for RK Graphics Project 5"
        # endif // RK_GRAPHICS_PROJECT_5_CONFIGS
        //-- Check if RKLogger is Configured
        # ifndef HAS_RKACPB_MODULE_RKLOGGER
            # error "RKLogger is Required for RK Graphics Project 5"
        # endif // HAS_RKACPB_MODULE_RKLOGGER
        //-- Check if RKOGLT is Configured
        # ifndef HAS_RKACPB_MODULE_RKOGLT
            # error "RKOGLT is Required for RK Graphics Project 5"
        # endif // HAS_RKACPB_MODULE_RKOGLT
        //-- Check if Window is Configured
        # ifndef HAS_RKACPB_MODULE_WINDOW
            # error "Window is Required for RK Graphics Project 5"
        # endif // HAS_RKACPB_MODULE_WINDOW
        //-- Check if Line is Configured
        # ifndef HAS_RKACPB_MODULE_LINE
            # error "Line is Required for RK Graphics Project 5"
        # endif // HAS_RKACPB_MODULE_LINE
        //-- Check if Polygon is Configured
        # ifndef HAS_RKACPB_MODULE_POLYGON
            # error "Polygon is Required for RK Graphics Project 5"
        # endif // HAS_RKACPB_MODULE_POLYGON
        //-- Check if Triangle is Configured
        # ifndef HAS_RKACPB_MODULE_TRIANGLE
            # error "Triangle is Required for RK Graphics Project 5"
        # endif // HAS_RKACPB_MODULE_TRIANGLE
    # endif // RKACPB
    //-- Include Configuration File
    # ifndef RK_GRAPHICS_PROJECT_5_CONFIGS
        # include "Configs5.hpp"
    # endif // RK_GRAPHICS_PROJECT_5_CONFIGS
    //-- Include RKLogger
    # ifndef RKLOGGER
        # include "RKLogger.hpp"
    # endif // RKLOGGER
    //-- Include RKOGLT
    # ifndef RKOGLT
        # include "RKOGLT.hpp"
    # endif // RKOGLT
    //-- Include Window
    # ifndef SYNESTIA_GRAPHICS_WINDOW
        # include "Window.hpp"
    # endif // SYNESTIA_GRAPHICS_WINDOW
    //-- Include Line
    # ifndef SYNESTIA_GRAPHICS_LINE
        # include "Line.hpp"
    # endif // SYNESTIA_GRAPHICS_LINE
    //-- Include Polygon
    # ifndef SYNESTIA_GRAPHICS_POLYGON
        # include "Polygon.hpp"
    # endif // SYNESTIA_GRAPHICS_POLYGON
    //-- Include Triangle
    # ifndef SYNESTIA_GRAPHICS_TRIANGLE
        # include "Triangle.hpp"
    # endif // SYNESTIA_GRAPHICS_TRIANGLE
    //-- Include Thread Library
    # ifndef _GLIBCXX_THREAD
        # include <thread>
    # endif // _GLIBCXX_THREAD
    //-- Include Chrono Library
    # ifndef _GLIBCXX_CHRONO
        # include <chrono>
    # endif // _GLIBCXX_CHRONO
    //-- Include Deque Library
    # ifndef _GLIBCXX_DEQUE
        # include <deque>
    # endif // _GLIBCXX_DEQUE
    /**
     * @brief Ramtin Kosari's Mouse Function Type
     * @enum RKMouseFunctionType
     * @note This Enum Defines Different Types of Mouse Functions
     * @param RK_MOUSE_FUNCTION_CIRCLE_TEST Test Mouse Function
     * @param RK_MOUSE_FUNCTION_CIRCLE_RADIUS Circle Radius Mouse Function
     * @param RK_MOUSE_FUNCTION_LINE_THICKNESS Line Thickness Mouse Function
     * @param RK_MOUSE_FUNCTION_RECTANGLE_THICKNESS Rectangle Thickness Mouse Function
     */
    enum RKMouseFunctionType {
        RK_MOUSE_FUNCTION_CIRCLE_TEST,
        RK_MOUSE_FUNCTION_CIRCLE_RADIUS,
        RK_MOUSE_FUNCTION_LINE_THICKNESS,
        RK_MOUSE_FUNCTION_RECTANGLE_THICKNESS
    };
    /**
     * @brief Class to Handle Mouse Functions
     * @class RKMouseFunctions
     */
    class RKMouseFunctions {
        public:
            synwin::SynWindow window = synwin::SynWindow(
                "Synestia Graphics",
                RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT,
                RK_MOUSE_FUNCTIONS_WINDOW_WIDTH
            );
            /**
             * @brief Construct a New Mouse Functions Object
             */
            RKMouseFunctions();
            /**
             * @brief Construct a New Mouse Functions Object
             * @param type Mouse Function Type
             */
            RKMouseFunctions(int type);
            /**
             * @brief First and Second Points
             */
            RKGPoint first, second;
            /**
             * @brief Distance between First and Second Points
             */
            int distance;
            /**
             * @brief Amount of Points
             * @note This is Used for Points to Create Circle
             */
            int amount;
            /**
             * @brief Theta of First and Second Points Connection to X Axis
             * @note This is Used for Points to Create Circle
             */
            double theta;
            /**
             * @brief Relative X of Second Point to First Point
             */
            int x_rel;
            /**
             * @brief Relative Y of Second Point to First Point
             */
            int y_rel;
    };
# endif // RK_GRAPHICS_PROJECT_5