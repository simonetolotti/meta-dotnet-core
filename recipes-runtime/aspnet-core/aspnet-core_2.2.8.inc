###################################################################################################
# Contains additional parameters for the recipe to download the release binaries from Microsoft.
# Copyright Matthijs de Ridder 2019
###################################################################################################
SUMMARY = "Contains the binaries for Microsoft's ASP .NET Core 2.2.8"
HOMEPAGE = "https://dotnet.microsoft.com/download/dotnet-core/3.0"

DOTNET_RUNTIME_ARCH = "none"
DOTNET_RUNTIME_ARCH_arm = "arm"
DOTNET_RUNTIME_ARCH_x86_64 = "x64"
DOTNET_RUNTIME_ARCH_aarch64 = "arm64"

# This is here because it doesn't seem like bitbake likes ${PV} used in require statements.
require recipes-runtime/aspnet-core/aspnet-core_2.2.8_${DOTNET_RUNTIME_ARCH}.inc
