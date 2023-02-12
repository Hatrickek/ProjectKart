include "./vendor/premake/premake_customization/solution_items.lua"

workspace "ProjectKart"
	architecture "x86_64"
	startproject "ProjectKart"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "ProjectKart"
