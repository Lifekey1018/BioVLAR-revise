// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System.Reflection;
using System.Runtime.CompilerServices;

[assembly: AssemblyProduct("Microsoft® Mixed Reality Toolkit Spatial Manipulation")]
[assembly: AssemblyCopyright("Copyright © Microsoft Corporation")]

[assembly: InternalsVisibleTo("Microsoft.MixedReality.Toolkit.SpatialManipulation.Editor")]
[assembly: InternalsVisibleTo("Microsoft.MixedReality.Toolkit.SpatialManipulation.Runtime.Tests")]

// The AssemblyVersion attribute is checked-in and is recommended not to be changed often.
// https://docs.microsoft.com/troubleshoot/visualstudio/general/assembly-version-assembly-file-version
// AssemblyFileVersion and AssemblyInformationalVersion are added by pack-upm.ps1 to match the current MRTK build version.
[assembly: AssemblyVersion("3.0.0.0")]
[assembly: AssemblyFileVersion("3.0.0")]
[assembly: AssemblyInformationalVersion("3.0.0-pre.14")]
