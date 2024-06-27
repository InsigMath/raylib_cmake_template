# raylib_cmake_template
A basic raylib repo template that can be cloned in and used.

## General Workflow
On the command line of your choosing type the following github repo create command (or just follow the instructions on github on how to bring in the repo on your page and do a normal clone there):

    gh repo create <name-of-repo> --template InsigMath/raylib_cmake_template --private (or --public) --clone

This will make a new repo that is based on that template (and it will be cloned in your local directory), then use cmake to build like you normally would:

    cd <name-of-repo>
    mkdir build
    cmake (optional -G <build-system>) -B build/ -S .

This will set up the necessary changes to the folder with the build components needed and will include the raylib and fmt dependencies within src/. Then to make your executable type the following:

    cmake --build build
    ./build/<name-of-project-as-determined-by-cmake-script>

