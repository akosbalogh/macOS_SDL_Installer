##
#  This bash script installs Hoembrew and SDL 1.2 for macOS.
##

#HOMEBREW

# INSTALLING HOMEBREW (if it isn't installed yet)

if [[ $(command -v brew) == "" ]]; then
    echo "Installing Hombrew"
    /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
else
    echo "Updating Homebrew"
    brew update
fi


# INSTALLING SDL 1.2

echo "Installing SDL 1.2 and: sdl_gfx  sdl_ttf  sdl_image  sdl_mixes"

brew install sdl  sdl_gfx  sdl_ttf  sdl_image  sdl_mixes
## if any error hapens, try: brew install --force  





