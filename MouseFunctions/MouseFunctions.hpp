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
    //-- Include Point
    # ifndef SYNESTIA_GRAPHICS_POINT
        # include "Point.hpp"
    # endif // SYNESTIA_GRAPHICS_POINT
    //-- Include Text
    # ifndef SYNESTIA_GRAPHICS_TEXT
        # include "Text.hpp"
    # endif // SYNESTIA_GRAPHICS_TEXT
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
     * @brief RK Mouse Functions Window Sections
     * @enum RKMouseFunctionsWinSections
     * @param RK_MOUSE_FUNCTIONS_WINDOW_SECTION_TOOLBAR Toolbar Section
     * @param RK_MOUSE_FUNCTIONS_WINDOW_SECTION_CANVAS Canvas Section
     */
    enum RKMouseFunctionsWinSections {
        RK_MOUSE_FUNCTIONS_WINDOW_SECTION_TOOLBAR,
        RK_MOUSE_FUNCTIONS_WINDOW_SECTION_CANVAS
    };
    /**
     * @brief RK Mouse Functions Draw Modes
     * @enum RKMouseFunctionsDrawModes
     * @param RK_MOUSE_FUNCTIONS_DRAW_MODE_NONE No Draw Mode
     * @param RK_MOUSE_FUNCTIONS_DRAW_MODE_LINE Line Draw Mode
     * @param RK_MOUSE_FUNCTIONS_DRAW_MODE_RECTANGLE Rectangle Draw Mode
     * @param RK_MOUSE_FUNCTIONS_DRAW_MODE_CIRCLE Circle Draw Mode
     */
    enum RKMouseFunctionsDrawModes {
        RK_MOUSE_FUNCTIONS_DRAW_MODE_NONE,
        RK_MOUSE_FUNCTIONS_DRAW_MODE_LINE,
        RK_MOUSE_FUNCTIONS_DRAW_MODE_RECTANGLE,
        RK_MOUSE_FUNCTIONS_DRAW_MODE_CIRCLE
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
             * @brief Method to Draw Tool Bar
             */
            void drawToolBar();
            /**
             * @brief Method to Handle Mouse
             * @note This Method is Used to Bind Mouse Inside the Window
             */
            void handleMousePos();
            /**
             * @brief Method to Show Mouse Points
             */
            void showMousePoints();
            /**
             * @brief Method to Handle Draw Mode by Clicking on Toolbar
             */
            void handleDrawMode();
            /**
             * @brief Current Draw Mode
             */
            RKMouseFunctionsDrawModes draw_mode;
            /**
             * @brief First and Second Points
             */
            RKGPoint mouse_window, mouse_toolbar, first, second;
            /**
             * @brief Line, Rectangle, and Circle Sections
             */
            RKGSection sec_line, sec_rect, sec_circle;
            /**
             * @brief Current Mouse Functions Window Section
             */
            RKMouseFunctionsWinSections section;
            /**
             * @brief Distance between First and Second Points
             */
            int distance, distance2;
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
            int x_rel, x_rel2;
            /**
             * @brief Relative Y of Second Point to First Point
             */
            int y_rel, y_rel2;
            /**
             * @brief Mouse Pressed Flag
             */
            bool mouse_pressed, new_click;
            /**
             * @brief Start and End Draw Points
             */
            RKGPoint start_draw_point, end_draw_point;
            /**
             * @brief Status of Start and End Draw Points
             */
            bool status_start, status_end;
            /**
             * @brief Lines Thickness
             */
            float thickness = 1.0;
    };
# endif // RK_GRAPHICS_PROJECT_5