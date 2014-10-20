﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ceptrlib
{
	// Enums

	public enum SemanticContexts 
	{ 
		SYS_CONTEXT, 
		RECEPTOR_CONTEXT, 
		TEST_CONTEXT 
	}

	public enum SemanticTypes 
	{ 
		SEM_TYPE_STRUCTURE = 1, 
		SEM_TYPE_SYMBOL, 
		SEM_TYPE_PROCESS 
	}

	public enum SystemSymbolIDs
	{
		//-----  Basic symbols for underlying data types
		NULL_SYMBOL_ID = 0,
		DEFINITIONS_ID,
		STRUCTURES_ID,
		STRUCTURE_DEFINITION_ID,
		STRUCTURE_LABEL_ID,
		STRUCTURE_PARTS_ID,
		STRUCTURE_PART_ID,
		SYMBOLS_ID,
		SYMBOL_DECLARATION_ID,
		SYMBOL_STRUCTURE_ID,
		SYMBOL_LABEL_ID,

		TRUE_FALSE_ID,

		//-----  Symbols for the different semantic parts of semtrexes
		SEMTREX_MATCHED_PATH_ID,              ///< path to symbol matched by semtrex
		SEMTREX_SYMBOL_LITERAL_ID,            ///< This system symbol matches on the semantic type.         Ex: /TEST_SYMBOL
		SEMTREX_SEQUENCE_ID,                  ///< Match on a sequence of child nodes which are any valid semtrex's.  Ex: comma separated nodes
		SEMTREX_OR_ID,                        ///< Logical OR between two Semtrex expressions.      Ex: |
		SEMTREX_SYMBOL_ANY_ID,                ///< Match any symbol or value of the node.           Ex: .
		SEMTREX_ZERO_OR_MORE_ID,              ///< Requires one child Semtrex and matches on zero or more of that Semtrex.  Ex: /0/TestSemtrex*
		SEMTREX_ONE_OR_MORE_ID,               ///< Requires one child Semtrex and matches on one or more of that Semtrex.   Ex: /0/TestSemtrex+
		SEMTREX_ZERO_OR_ONE_ID,               ///< Requires one child Semtrex and matches on zero or one of that Semtrex.   Ex: /0/TestSemtrex?
		SEMTREX_VALUE_LITERAL_ID,	       ///< Matches on the semantic type and the data value.
		SEMTREX_GROUP_ID,                     ///< Grouping                                 Ex: (...)operator
		SEMTREX_MATCH_ID,                     ///< Returns result and sibling count.        Ex: {name:expr} (verify this is what it's supposed to do)
		SEMTREX_MATCH_RESULTS_ID,             ///< In the FSA_ID, keeps track of which part matches so it can be referenced
		SEMTREX_MATCH_SIBLINGS_COUNT_ID,      ///< In the FSA_ID, it's the length of the match

		//-----  Symbols for receptors
		RECEPTOR_XADDR_ID,                    ///< An Xaddr that points to a receptor
		FLUX_ID,                              ///< tree to hold all incoming and in process signals on the various aspects
		SCAPE_SPEC_ID,
		ASPECTS_ID,
		ASPECT_DEF_ID,
		ASPECT_TYPE_ID,
		CARRIER_ID,
		ASPECT_ID,
		SIGNALS_ID,                           ///< list of signals on an aspect in the flux
		SIGNAL_ID,                            ///< a signal on the flux.  It's first child is the contents of the signal
		ENVELOPE_ID,
		BODY_ID,
		LISTENERS_ID,                         ///< list of carrier/expectation/action tress that "listen" to changes on the flux
		LISTENER_ID,                          ///< surface of the listener is the carrier symbol, and it has two children_ID, expectation semtrex and action code tree
		EXPECTATION_ID,                       ///< expectation is a semtrex (thus has one child which is the first part of the semtrex)
		ACTION_ID,                            ///< code tree_ID, which specifies the action to perform when an expectation's semtrex matches
		INTERPOLATE_SYMBOL_ID,                ///< a place holder to indicate which symbol to insert into this part of the three
		PROCESSES_ID,
		PROCESS_CODING_ID,
		PROCESS_NAME_ID,
		PROCESS_INTENTION_ID,
		INPUT_ID,
		INPUT_SIGNATURE_ID,
		INPUT_LABEL_ID,
		SIGNATURE_STRUCTURE_ID,
		OUTPUT_SIGNATURE_ID,
		RUN_TREE_ID,                         ///< think about this as a stack frame and its code
		PARAM_REF_ID,                        ///< used in a code tree as a reference to a parameter
		PARAMS_ID,
		PROTOCOLS_ID,
		PROTOCOL_ID,
		ROLES_ID,
		ROLE_ID,
		INTERACTIONS_ID,
		INTERACTION_ID,
		STEP_ID,
		FROM_ROLE_ID,
		TO_ROLE_ID,
		RESPONSE_STEPS_ID,
		SCAPES_ID,

		//-----  Symbols for the virtual machine host
		VM_HOST_RECEPTOR_ID,
		COMPOSITORY_ID,                      ///< receptor that holds available receptor packages for installation
		MANIFEST_ID,                         ///< configuration template to be filled out for the installation of a receptor
		MANIFEST_PAIR_ID,
		MANIFEST_LABEL_ID,                   ///< a label in the manifest to identify a binding
		MANIFEST_SPEC_ID,                    ///< a symbol to specify what type of data must be provided for a given manifest label
		RECEPTOR_PACKAGE_ID,                 ///< a manifest, a symbol declaration tree, a structure definition tree_ID, and an identifier
		RECEPTOR_IDENTIFIER_ID,              ///< uuid that identifies receptors
		INSTALLED_RECEPTOR_ID,               ///< contains the installed receptor as well as state information (enabled,disabled_ID, etc..)
		ACTIVE_RECEPTORS_ID,                 ///< list of currently active INSTALLED_RECEPTORS
		PENDING_SIGNALS_ID,                  ///< list of currently active INSTALLED_RECEPTORS
		BINDINGS_ID,                         ///< specifics that match a MANIFEST and allow a receptor to be installed
		BINDING_PAIR_ID,                     ///< a pair that matches a MANIFEST_LABEL with a given binding
	}

	public enum SystemStructureID
	{
		NULL_STRUCTURE_ID,
		BOOLEAN_ID,
		INTEGER_ID,
		FLOAT_ID,
		CSTRING_ID,
		SYMBOL_ID,
		ENUM_ID,
		TREE_PATH_ID,
		XADDR_ID,
		LIST_ID,
		SURFACE_ID,
		TREE_ID,
		RECEPTOR_ID,
		PROCESS_ID,
		STRUCTURE_ID,
		SCAPE_ID,
	}

	// ======= Enums ==========

	[StructLayout(LayoutKind.Sequential, Pack = 1), Serializable]
	public unsafe struct SemanticID
	{
		public UInt16 context;
		public UInt16 flags;
		public UInt32 id;
	};

	[StructLayout(LayoutKind.Sequential, Pack=1), Serializable]
	public unsafe struct Tstruct
	{
		public T* node;
		public int child_count;
		public T** children;
	}

	[StructLayout(LayoutKind.Sequential, Pack = 1), Serializable]
	public unsafe struct Tcontents
	{
		public SemanticID symbol;
		public int size;
		public IntPtr surface;
	}

	[StructLayout(LayoutKind.Sequential, Pack = 1), Serializable]
	public unsafe struct Tcontext
	{
		public int flags;
	}

	[StructLayout(LayoutKind.Sequential, Pack = 1), Serializable]
	public unsafe struct T
	{
		public Tstruct structure;
		public Tcontext context;
		public Tcontents contents;
	}

	[StructLayout(LayoutKind.Sequential, Pack = 1), Serializable]
	public unsafe struct Defs 
	{
		public T *structures;
		public T *symbols;   
		public T *processes; 
		public T *scapes;    
	};

	public class CeptrInterface
	{
		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static void def_sys();

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static void sys_free();

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static unsafe void testGetSize();

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static unsafe T* _t_new(IntPtr parent, SemanticID sid, IntPtr surface, int size);

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static unsafe T* _t_new_root(SemanticID sid);

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static unsafe SemanticID _d_declare_symbol(T* symbols, SemanticID sid, string label, UInt16 context);

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static unsafe SemanticID _d_define_structure(T* structures, [MarshalAs(UnmanagedType.LPStr)] string label, int num_params, __arglist);

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static unsafe SemanticID _dv_define_structure(T* structures, [MarshalAs(UnmanagedType.LPStr)] string label, UInt16 context, int num_params, __arglist);

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		extern static unsafe SemanticID _t_children(T* structures);

		// extern static unsafe Symbol _d_define_structure(T* structures, char* label, int num_params, UInt32 p1, UInt32 p2);

		[DllImport("libceptrlib.dll", CallingConvention = CallingConvention.Cdecl)]
		// [return: MarshalAs(UnmanagedType.LPStr)]
		extern static unsafe void __t_dump(Defs* defs, T* t, int level, char* buf);

		protected Dictionary<Guid, IntPtr> nodes = new Dictionary<Guid, IntPtr>();

		public unsafe void Initialize()
		{
			def_sys();
		}

		public unsafe void Terminate()
		{
			sys_free();
		}

		/// <summary>
		/// Create a root node.
		/// </summary>
		/// <param name="symbol">The node symbol.</param>
		/// <returns>A GUID associated with this node instance.</returns>
		public unsafe Guid CreateRootNode(SemanticID structures)
		{
			T *node = _t_new_root(structures);
			Guid guid = RegisterNode(node);

			return guid;
		}

		/// <summary>
		/// Declare a symbol having the specified structure.
		/// </summary>
		public unsafe SemanticID DeclareSymbol(Guid symbols, SemanticID st, string label, SemanticContexts sc)
		{
			T *pnode = (T*)nodes[symbols];
			SemanticID symbol = _d_declare_symbol(pnode, st, label, (UInt16)sc);

			return symbol;
		}

		public unsafe SemanticID DefineStructure(Guid structures, string name, SemanticContexts sc, SemanticID[] symbolArray)
		{
			T *structs = (T*)nodes[structures];

			_dv_define_structure(structs, name, (UInt16)sc, symbolArray.Length, __arglist(symbolArray));
			SemanticID st = _t_children(structs);

			return st;
		}

		public unsafe string DumpStructures(Guid g_symbols, Guid g_structures)
		{
			Defs defs = new Defs() 
			{ 
				structures = (T*)nodes[g_structures], 
				symbols = (T*)nodes[g_symbols], 
				processes = (T*)0, 
				scapes = (T*)0 
			};

			string ret = String.Empty;

			try
			{
				fixed (char* buf = new char[10000])
				{
					__t_dump(&defs, defs.structures, 0, buf);
					ret = Marshal.PtrToStringAnsi((IntPtr)buf);
				}
			}
			catch (Exception ex)
			{
				System.Diagnostics.Debugger.Break();
			}

			return ret;
		}

		public unsafe string DumpSymbols(Guid g_symbols, Guid g_structures)
		{
			Defs defs = new Defs()
			{
				structures = (T*)nodes[g_structures],
				symbols = (T*)nodes[g_symbols],
				processes = (T*)0,
				scapes = (T*)0
			};

			string ret = String.Empty;

			try
			{
				fixed (char* buf = new char[10000])
				{
					__t_dump(&defs, defs.symbols, 0, buf);
					ret = Marshal.PtrToStringAnsi((IntPtr)buf);
				}
			}
			catch (Exception ex)
			{
				System.Diagnostics.Debugger.Break();
			}

			return ret;
		}

		/// <summary>
		/// Return a Guid associated with the T* instance.
		/// </summary>
		protected unsafe Guid RegisterNode(T* node)
		{
			Guid guid = Guid.NewGuid();
			nodes[guid] = (IntPtr)node;

			return guid;
		}
	}
}

/*
 * 
 * Converting a char* to a string (return value)
 * http://stackoverflow.com/questions/9041094/char-to-a-string-in-c-sharp
 * 
using System.Runtime.InteropServices;
...
string s = Marshal.PtrToStringAnsi((IntPtr)c);
  
or 

[DllImport ( "MyDll.dll", CharSet = CharSet.Ansi, EntryPoint = "Func" )]
[return : MarshalAs( UnmanagedType.LPStr )]
string Func ( ... );
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/