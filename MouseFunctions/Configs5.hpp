# ifndef RK_GRAPHICS_PROJECT_5_CONFIGS
    /**
     * @file Configs5.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Configuration File for Mouse Functions
     * @date 2024-11-14
     */
    # define RK_GRAPHICS_PROJECT_5_CONFIGS
    //-- Behave According to Android or Linux
    # ifdef __ANDROID__
        /**
         * @brief Mouse Functions Window Width
         * @def RK_MOUSE_FUNCTIONS_WINDOW_WIDTH
         */
        # define RK_MOUSE_FUNCTIONS_WINDOW_WIDTH 1080
        /**
         * @brief Mouse Functions Window Height
         * @def RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT
         */
        # define RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT 2400
    # else
        /**
         * @brief Mouse Functions Window Width
         * @def RK_MOUSE_FUNCTIONS_WINDOW_WIDTH
         */
        # define RK_MOUSE_FUNCTIONS_WINDOW_WIDTH 2200
        /**
         * @brief Mouse Functions Window Height
         * @def RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT
         */
        # define RK_MOUSE_FUNCTIONS_WINDOW_HEIGHT 1440
    # endif // __ANDROID__
    /**
     * @brief Mouse Function Default Points Amount
     * @def RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT
     */
    # define RK_MOUSE_FUNCTION_DEFAULT_POINTS_AMOUNT 50
    /**
     * @brief Mouse Function Toolbar Height
     * @def RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT
     */
    # define RK_MOUSE_FUNCTION_TOOLBAR_HEIGHT 100
    /**
     * @brief Mouse Function Show Mouse Points
     * @def RK_MOUSE_FUNCTION_SHOW_MOUSE_POINTS
     */
    # define RK_MOUSE_FUNCTION_SHOW_MOUSE_POINTS false
    /**
     * @brief Mouse Function Show Toolbar Sections
     * @def RK_MOUSE_FUNCTION_SHOW_TOOLBAR_SECTIONS
     */
    # define RK_MOUSE_FUNCTION_SHOW_TOOLBAR_SECTIONS false
    /**
     * @brief Mouse Function Toolbar Section Amount
     * @def RK_MOUSE_FUNCTION_TOOLBAR_SECTION_AMOUNT
     */
    # define RK_MOUSE_FUNCTION_TOOLBAR_SECTION_AMOUNT 3
    /**
     * @brief Mouse Function Toolbar Section Width
     * @def RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH
     */
    # define RK_MOUSE_FUNCTION_TOOLBAR_SECTION_WIDTH (RK_MOUSE_FUNCTIONS_WINDOW_WIDTH / RK_MOUSE_FUNCTION_TOOLBAR_SECTION_AMOUNT)
# endif // RK_GRAPHICS_PROJECT_5_CONFIGS