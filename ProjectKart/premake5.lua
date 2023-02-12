project "ProjectKart"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++20"
	staticruntime "on"
	exceptionhandling "off"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	includedirs
	{
		"src",
		"%{wks.location}/Oxylus/Oxylus/src/";
	}

	links
	{
		"Oxylus"
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Debug"
		defines "OX_DEBUG"
		defines "_DEBUG"
		runtime "Debug"
		symbols "on"
		
		filter "configurations:Release"
		defines "OX_RELEASE"
		defines "NDEBUG"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "OX_DIST"
		defines "NDEBUG"
		runtime "Release"
		optimize "on"
